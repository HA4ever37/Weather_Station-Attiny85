# Weather Station - Attiny85
Simple weather Station using Attiny85 + DHT11 +  I2C LCD 16X2

Features:
* Print temperature and humidity on screen
* Buzzer notification per reading
* Automatic backlight using photoresistor
* Low power consumption, less than 1mA during deep sleep
* Push button to wake up (actually reset) the microcontroller and read data from DHT11
* Timer for the number of readings before the microcontroller goes to sleep (10 readings by default)
* Print error code on the screen when cannot read from DHt11


Two external libraries are needed: "LiquidCrystal_I2C" and "SimpleDHT"


Needed hardware:
* Attiny85
* 16X2 LCD with I2C controller (lcm1602)
* DHT11 sensor
* Piezo buzzer
* 2 np2222a transistors
* 10K ohm resistor
* Photo photoresistor (LDR)
* Push button
* Solderless breadboard
* Jump wires
* A way to upload the sketch to the attiny85 (I use arduino uno board)
* (Optional) capacitor between VCC and GND


![alt text](https://raw.githubusercontent.com/HA4ever37/Weather_Station-Attiny85/master/HDT11_attiny85_bb.png)
![alt text](https://raw.githubusercontent.com/HA4ever37/Weather_Station-Attiny85/master/Weather-Station-Attiny85.jpg)
