/*
This program exercises the Analogin class by creating an Analogin object
and setting that equal to a specific Analog Pin. The number is then repeated
and the value is read using the Analogin's class functions
Example Innvocation: ./test_analog
*/
#include <iostream>
#include <unistd.h>
#include "Analogin.h"

using namespace std;

int main(){

  Analogin a_inp(0); 

  cout << "Analog Number: " << a_inp.getNumber() << endl;
  cout << "Current Analog: " << a_inp.readAdcSample() << endl;
  sleep(1);
  cout << "Current Analog: " << a_inp.readAdcSample() << endl;
  sleep(1);
  cout << "Current Analog: " << a_inp.readAdcSample() << endl;
  sleep(1);
}
