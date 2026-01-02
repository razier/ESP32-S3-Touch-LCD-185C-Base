# ESP32-S3-Touch-LCD-185C-Base
Starter project for ESP32-S3-Touch-LCD-1.85C


1. This base excludes the speech recognition model
	In Arduino IDE > Tools > Partition Scheme = "16M Flash (3MB APP/9.9MB FATFS)" as the Partition Scheme else you will get an error saying 'srmodels.bin' is missing when you upload to the board
	<img width="917" height="747" alt="image" src="https://github.com/user-attachments/assets/30c03675-50a9-42a0-8254-dabf0c16cbcb" />


2. Set the Sketchbook location of your Arduino IDE to this project folder
	e.g. c:\ESP32-S3-Touch-LCD-185C-Base\
	<img width="658" height="181" alt="image" src="https://github.com/user-attachments/assets/f61a778e-5a39-44a1-990e-a2b86e10274f" />


4. Interface are made using EEZ Studio and copied over to libraries/ui
