//
//  7 16 1 Return number of pennies in total.cpp
//  WGU Tester
//
//  Created by Luis Vegerano on 11/25/20.
//

#include <stdio.h>
#include <iostream>
using namespace std;

int NumberOfPennies(int dollarAmount, int pennyAmount = 0){
   int totalPennies = 0;
   
   totalPennies = (dollarAmount * 100) + pennyAmount;
   
   return totalPennies;
}

int main() {
   cout << NumberOfPennies(5, 6) << endl; // Should print 506
   cout << NumberOfPennies(4) << endl;    // Should print 400
   return 0;
}
