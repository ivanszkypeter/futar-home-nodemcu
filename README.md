# FUTÁR@home
Unofficial home version of the BKK Centre for Budapest Transport's project, the FUTÁR (passenger information system)

# Overview

The project provides the similar functionality as the street display of FUTÁR system. You can check the arrival times of different vehicles to some predefined stops, and the result is on a multi-line character screen. The system has two parts. It needs a server side application which gathers the information from the servers of BKK and prepares the data to submit to the display. And the display part which periodically polls the server side about the new data to show.

![Photo](https://raw.githubusercontent.com/ivanszkypeter/futar-home-nodemcu/master/images/FUTAR-Photo.jpg)

This repository contain the display part. To navigate to the server side part [click here](https://github.com/ivanszkypeter/futar-home-server).

# Hardware

Required components for this project:
* NodeMCU (With built in wifi)
* 20x4 LCD display module
* I2C Serial Interface board
* 4 AA battery holder

![Breadboard view](https://raw.githubusercontent.com/ivanszkypeter/futar-home-nodemcu/master/images/FUTAR-BreadboardView.png)
