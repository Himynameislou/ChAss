//
//  7 12 3 Modify a vector parameter.cpp
//  WGU Tester
//
//  Created by Luis Vegerano on 11/24/20.
//

#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;

void SwapVectorEnds(vector<int>& sortVector){
   int i = 0;
   int tempVal = sortVector.at(0);
   int vectSize = sortVector.size();
   
   tempVal = sortVector.at(i);
   sortVector.at(i) = sortVector.at(vectSize - 1 - i);
   sortVector.at(vectSize - 1 - i) = tempVal;
   
 
   
}

int main() {
   vector<int> sortVector(4);
   int i = 0;

   sortVector.at(0) = 10;
   sortVector.at(1) = 20;
   sortVector.at(2) = 30;
   sortVector.at(3) = 40;

   SwapVectorEnds(sortVector);

   for (i = 0; i < sortVector.size(); ++i) {
      cout << sortVector.at(i) << " ";
   }
   cout << endl;

   return 0;
}
