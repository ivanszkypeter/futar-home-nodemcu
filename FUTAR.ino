#include <ESP8266WiFi.h>
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,20,4);
 
const char* ssid     = "<SSID>";
const char* password = "<PASSWORD>";
 
const char* host = "<SERVER_HOST>";
const char* url = "<SERVER_PATH>";
 
void setup() {
  lcd.init();
  lcd.backlight();
  lcd.setCursor(3,1);
  lcd.print("BKK Futar v1.0");
  delay(100);
  
  WiFi.begin(ssid, password);
  
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
  }

}
 
int value = 0;
 
void loop() {
  delay(5000);
  ++value;
  
  WiFiClient client;
  const int httpPort = 80;
  if (!client.connect(host, httpPort)) {
    return;
  }
  
  // This will send the request to the server
  client.print(String("GET ") + url + " HTTP/1.1\r\n" +
               "Host: " + host + "\r\n" + 
               "Connection: close\r\n\r\n");
  delay(10000);
  
  handlResponse(client);
}

void handlResponse(WiFiClient client) {
  handlResponseHeader(client);
  handlResponseBody(client);
}


void handlResponseHeader(WiFiClient client) {
  bool isHeader = true;
  while(client.available() && isHeader == true){
    String line = client.readStringUntil('\r\n');
    if (line.length() == 1) {
      isHeader = false;
    }
  }
}

void handlResponseBody(WiFiClient client) {
  lcd.clear();
  int lineNumber = 0;
  while(client.available()){
      String line = client.readStringUntil('#');
      lcd.setCursor(0, lineNumber);
      lcd.print(line);
      lineNumber++;
  }
}

