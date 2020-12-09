//
//  9 3 2 allocating memory.cpp
//  WGU Tester
//
//  Created by Luis Vegerano on 12/9/20.
//

#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
   double* houseHeight = nullptr;

   /* Your solution goes here  */
    houseHeight = new double;

   *houseHeight = 23;
   cout << "houseHeight is " << *houseHeight;

   delete houseHeight;

   return 0;
}
