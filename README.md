# ESP32-S3-Touch-LCD-185C-Base
Starter project for ESP32-S3-Touch-LCD-1.85C


1. This base excludes the speech recognition model
	In Arduino IDE > Tools > Partition Scheme = "16M Flash (3MB APP/9.9MB FATFS)" as the Partition Scheme else you will get an error saying 'srmodels.bin' is missing when you upload to the board

	![image](https://www.waveshare.com/w/upload/f/f0/ESP32-S3-Touch-LCD-1.46_Demo_2.png)

2. Set the Sketchbook location of your Arduino IDE to this project folder
e.g. c:\ESP32-S3-Touch-LCD-185C-Base

3. Interface are made using EEZ Studio and copied over to libraries/ui
