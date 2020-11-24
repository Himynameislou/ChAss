//
//  7 12 1 Use an existing function.cpp
//  WGU Tester
//
//  Created by Luis Vegerano on 11/24/20.
//

#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

void GetUserInfo(int& userAge, string& userName) {
   cout << "Enter your age: " << endl;
   cin >> userAge;
   cout << "Enter your name: " << endl;
   cin >> userName;
   return;
}

int main() {
   int userAge = 0;
   string userName = "";
   // solution below
   GetUserInfo(userAge,userName);
    //
   cout << userName << " is " << userAge << " years old." << endl;

   return 0;
}
