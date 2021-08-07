# STM32 DHT11/DHT22 Library

I made some changes to the code to make this library work with STM32 microcontrollers 

---
**Description:**  
DHT11/DHT22 temperature and humidity sensor driver for AVR microcontrollers.  
+ This library does not use any hardware timer or interrupts.  
+ By contrast, the readings are accomplished with delays.  
+ Functions include:  
  + Reading raw data in an array.  
  + Getting the calculated temperature and/or humidity directly.  
  + Converting the temperature from Celsius to Kelvin or Fahrenheit units.  
  _Read the bottom of "DHT.h" to see all functions available._  
+ **The readings are time-critical, so every time you perform a reading, you should temporarily disable interrupts.** 

--- 

![picture alt](https://raw.githubusercontent.com/efthymios-ks/AVR-DHT-Library/master/Demonstration.png)  

---
