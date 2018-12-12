#include <LiquidCrystal_I2C.h>
#include <SimpleDHT.h>
#include <avr/sleep.h>
#include <avr/power.h>

#define buzzer 1
#define LcdPwr 3
#define pinDHT11 4

LiquidCrystal_I2C lcd(0x3F, 16, 2);  // set the LCD address to 0x3F for a 16 chars and 2 line display (Green)
//LiquidCrystal_I2C lcd(0x27, 16, 2);  // set the LCD address to 0x27 for a 16 chars and 2 line display (Blue)
SimpleDHT11 dht11;

void setup()
{
  set_sleep_mode(SLEEP_MODE_PWR_DOWN);
  pinMode(pinDHT11, INPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(LcdPwr, OUTPUT);
  digitalWrite(LcdPwr, HIGH);
  lcd.init();
  lcd.display();
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print(F("Weather Station"));
  lcd.setCursor(0, 1);
  lcd.print(F("By: HA4ever ^_*"));
  delay(1500);
}

void loop()
{
  byte temperature = 0, humidity = 0;
  int err = SimpleDHTErrSuccess;
  for (byte i = 0; i < 6; i++) {
    if ((err = dht11.read(pinDHT11, &temperature, &humidity, NULL)) != SimpleDHTErrSuccess) {
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print(F("Read failed!"));
      lcd.setCursor(0, 1);
      lcd.print(F("Error code: "));
      lcd.print(err);
      delay(1000);
      return;
    }
    tone(buzzer, 500, 25);
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print(F("Temp: "));
    lcd.print((int)temperature);
    lcd.print(F(" *C"));
    lcd.setCursor(0, 1);
    lcd.print(F("Humidity: "));
    lcd.print((int)humidity);
    lcd.print(F("%"));
    delay(1250);
  }
  enterSleep();
}

void enterSleep(void)
{
  tone(buzzer, 300, 25);
  lcd.noBacklight();
  lcd.noDisplay();
  delay(50);
  digitalWrite(LcdPwr, LOW);
  power_usi_disable();
  power_timer1_disable();
  power_adc_disable();
  power_all_disable();
  sleep_enable();
  sleep_cpu();
}
