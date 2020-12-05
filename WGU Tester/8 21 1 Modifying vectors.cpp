//
//  8 21 1 Modifying vectors.cpp
//  WGU Tester
//
//  Created by Luis Vegerano on 12/5/20.
//

#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;

void PrintVectors(vector<int> numsList) {
   int i;
   for (i = 0; i < numsList.size(); ++i) {
      cout << numsList.at(i) << " ";
   }
   cout << endl;
}

int main() {
   vector<int> numsList;

   numsList.push_back(101);
   numsList.push_back(200);
   numsList.push_back(103);

   /* Your solution goes here  */

   PrintVectors(numsList);

   return 0;
}
