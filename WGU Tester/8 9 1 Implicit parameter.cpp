//
//  8 9 1 Implicit parameter.cpp
//  WGU Tester
//
//  Created by Luis Vegerano on 12/4/20.
//

#include <stdio.h>
#include <iostream>
using namespace std;

class CablePlan{
   public:
      void  SetNumDays(int numDays);
      int   GetNumDays() const;
   private:
      int   numDays;
};

// FIXME: Define SetNumDays() member function, using "this" implicit parameter.
void CablePlan::SetNumDays(int numDays) {

   /* Your solution goes here  */
    this -> numDays = numDays;

   return;
}

int CablePlan::GetNumDays() const {
   return numDays;
}

int main() {
   CablePlan house1Plan;

   house1Plan.SetNumDays(30);
   cout << house1Plan.GetNumDays() << endl;

   return 0;
}
