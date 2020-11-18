//
//  781 Function Errors Copying Function.cpp
//  WGU Tester
//
//  Created by Luis Vegerano on 11/18/20.
//

#include <iostream>
using namespace std;

double CelsiusToKelvin(double valueCelsius) {
   double valueKelvin = 0.0;

   valueKelvin = valueCelsius + 273.15;

   return valueKelvin;
}

/* Your solution goes here  */

int kelcel() {
   double valueC = 0.0;
   double valueK = 0.0;

   valueC = 10.0;
   cout << valueC << " C is " << CelsiusToKelvin(valueC) << " K" << endl;

   valueK = 283.15;
   cout << valueK << "  is " << KelvinToCelsius(valueK) << " C" << endl;

   return 0;
}
