//
//  7 10 1 Modify Array.cpp
//  WGU Tester
//
//  Created by Luis Vegerano on 11/23/20.
//

#include "7 10 1 Modify Array.hpp"
#include <iostream>
using namespace std;

void SwapArrayEnds(int sortArray[], int SORT_ARR_SIZE){
   int tempVal = 0;
   
   tempVal = sortArray[0];
   sortArray[0] = sortArray[SORT_ARR_SIZE - 1];
   sortArray[SORT_ARR_SIZE - 1] = tempVal;
   
   return;
}

int test() {
   const int SORT_ARR_SIZE = 4;
   int sortArray[SORT_ARR_SIZE];
   int i = 0;

   sortArray[0] = 10;
   sortArray[1] = 20;
   sortArray[2] = 30;
   sortArray[3] = 40;

   SwapArrayEnds(sortArray, SORT_ARR_SIZE);

   for (i = 0; i < SORT_ARR_SIZE; ++i) {
      cout <<  sortArray[i] << " ";
   }
   cout << endl;

   return 0;
}
