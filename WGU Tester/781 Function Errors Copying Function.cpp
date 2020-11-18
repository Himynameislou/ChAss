//
//  781 Function Errors Copying Function.cpp
//  WGU Tester
//
//  Created by Luis Vegerano on 11/18/20.
//
#include <stdio.h>
#include <iostream>
using namespace std;

double CelsiusToKelvin(double valueCelsius) {
   double valueKelvin = 0.0;

   valueKelvin = valueCelsius + 273.15;

   return valueKelvin;
}

double KelvinToCelsius(double valueKelvin){
   double valueCelsius = 0.0;
   
   valueCelsius = valueKelvin - 273.15;
   
   return valueCelsius;
}

int kelcel() {
   double valueC = 0.0;
   double valueK = 0.0;

   valueC = 10.0;
   cout << valueC << " C is " << CelsiusToKelvin(valueC) << " K" << endl;

   valueK = 283.15;
   cout << valueK << "  is " << KelvinToCelsius(valueK) << " C" << endl;

   return 0;
}
