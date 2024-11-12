/*
This program exercises the LED, Analogin and GPIO classes by manipulating
a combination of onboard and external LED's and Inputs.
Example Innvocation: ./test_all_App.cpp
*/
#include <iostream>
#include "Analogin.h"
#include "GPIO.h"
#include "makeLEDs.h"

using namespace exploringBB;

int main(){

  //Declations
  LED onLED0(0);             //Board LED0
  LED onLED1(1);             //Board LED1
  LED onLED2(2);             //Board LED2
  LED onLED3(3);             //Board LED3

  GPIO LED4(60);              //External LED
  GPIO Button(46);            //Button
  Analogin T_Sensor(0);       //Temperature Sensor
  
  Button.setDirection(INPUT);
  LED4.setDirection(OUTPUT);
  //A
  onLED1.turnOn();
  onLED3.turnOn();
  //B
  onLED2.flash("50");
  //C
  cout << "Temperature Sensor Value: " << T_Sensor.readAdcSample() << endl;
  //D
  int button_Value = Button.getValue();
  cout << "Button Value: " << button_Value << endl;
  //E
  if(button_Value == 0){
    LED4.setValue(HIGH);
  }
  else{
    LED4.setValue(LOW);
  }
  

}
