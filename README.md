# Weather Station - Attiny85
Simple weather Station using Attiny85 + DHT11 +  I2C LCD 16X2

Features:
* Print temperature (in Celsius) and humidity level on screen
* Buzzer notification per reading (just a small beep)
* Automatic backlight using photoresistor a.k.a. LDR
* Low power consumption, less than 1mA during deep sleep
* Push button to wake up (actually reset) the microcontroller and read data from DHT11
* Timer for the number of readings before the microcontroller goes to sleep (6 readings by default)
* Print error code on the screen when cannot read from DHt11


Two external libraries are needed: "LiquidCrystal_I2C" and "SimpleDHT"


Needed hardware:
* Attiny85 and an ISP programmer (you can use Digispark attiny85 to elimnate the need for an external programmer)
* 16X2 LCD with I2C controller (LCM1602 IIC)
* DHT11 sensor
* Piezo buzzer
* 2 np2222a transistors
* 10K ohm resistor
* Photo photoresistor (LDR)
* Push button
* Solderless breadboard
* Jump wires
* (Optional) stabilizing capacitor between VCC and GND


![alt text](https://raw.githubusercontent.com/HA4ever37/Weather_Station-Attiny85/master/HDT11_attiny85_bb.png)
![alt text](https://raw.githubusercontent.com/HA4ever37/Weather_Station-Attiny85/master/Weather-Station-Attiny85.jpg)
