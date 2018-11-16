# Weather Station - Attiny85
Simple weather Station using Attiny85 + DHt11 +  I2C LCD 16X2

Features:
* print temperature and humidity on screen
* Buzzer notification per reading
* Automatic backlight using photoresistor
* Low power consumption, less than 1mA during deep sleep
* Push button to wakeup (actually reset) the mirocontroller and read data from DHT11
* Timer for the number of readings before the microcontroller goes to sleep (10 readings by default)
* Print error code on the screen when cannot read from DHt11

Two external libraries are required: "LiquidCrystal_I2C" and "SimpleDHT"

Needed hardware:
* Attiny85
* 16X2 LCD with I2C controller (lcm1602)
* DHT11 sensor
* Piezo buzzer
* 2 np2222a transistors
* 10K ohm resistor
* photo photoresistor
* Push button
* Solderless breadboard
* Jump wires
* (Optional) capacitor between VCC and GND


![alt text](https://github.com/HA4ever37/Weahter-Station---Attiny85/blob/master/HDT11_attiny85_bb.png?raw=true)
![alt text](https://github.com/HA4ever37/Weather-Station---Attiny85/blob/master/Weather-Station-Attiny85.jpg?raw=true)
