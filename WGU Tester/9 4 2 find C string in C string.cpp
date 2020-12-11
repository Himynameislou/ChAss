//
//  9 4 2 find C string in C string.cpp
//  WGU Tester
//
//  Created by Luis Vegerano on 12/11/20.
//

#include <stdio.h>
#include <iostream>
#include <cstring>
using namespace std;

int main() {
   char movieTitle[100] = "The Lion King";
   char* movieResult = nullptr;

   /* Your solution goes here  */
    movieResult = strstr(movieTitle, "The");

   cout << "Movie title contains The? ";
   if (movieResult != nullptr) {
      cout << "Yes." << endl;
   }
   else {
      cout << "No." << endl;
   }

   return 0;
}
