# FUTÁR@home
Unofficial home version of the BKK Centre for Budapest Transport's project, the FUTÁR (passenger information system)

# Overview

The project provides the same functionality as original FUTÁR. You can check the arrival times of different vehicles time to some predefined stops, and the result is on a multi-line character screen. The system has two parts. It needs a server side application which gathers the information from the servers of BKK and prepares the data to submit to the display. And the display part which periodically polls the server side about the new data to show.

![Photo](https://raw.githubusercontent.com/ivanszkypeter/futar-home-nodemcu/master/images/FUTAR-Photo.jpg)

This repository contain the display part.

# Hardware

![Breadboard](https://raw.githubusercontent.com/ivanszkypeter/futar-home-nodemcu/master/images/FUTAR-BreadboardView.png)

Required components for this project:
* NodeMCU (With built in wifi)
* 20x4 LCD display module
* I2C Serial Interface board
* 4 AA battery holder
