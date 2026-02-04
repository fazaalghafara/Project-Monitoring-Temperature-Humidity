#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
#include <DHT.h>


LiquidCrystal_I2C lcd(0x27, 16, 2); 

#define DHTPIN 4
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);

void setup() {
  dht.begin();
  
  
  lcd.init();
  lcd.backlight(); 
  
  lcd.setCursor(0, 0);
  lcd.print("Suhu & Humid");
  delay(2000);
}

void loop() {
  float h = dht.readHumidity();
  float t = dht.readTemperature();

  if (isnan(h) || isnan(t)) {
    lcd.clear();
    lcd.print("Sensor Error!");
  } else {
    lcd.clear();
    
    lcd.setCursor(0, 0);
    lcd.print("Temp : ");
    lcd.print(t, 1);
    lcd.print("C");

    
    lcd.setCursor(0, 1);
    lcd.print("Humid: ");
    lcd.print(h, 0);
    lcd.print("%");
  }
  
  delay(2000);
}