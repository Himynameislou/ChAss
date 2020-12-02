//
//  8 6 1 Constructor overloading.cpp
//  WGU Tester
//
//  Created by Luis Vegerano on 12/2/20.
//

#include <stdio.h>
#include <iostream>
using namespace std;

class PhonePlan{
   public:
      PhonePlan();
      PhonePlan(int numMinutes, int numMessages);
      void   Print() const;
   private:
      int    freeMinutes;
      int    freeMessages;
};

PhonePlan::PhonePlan() {     // Default constructor
   freeMinutes  = 0;
   freeMessages = 0;
   return;
}

// FIXME: Create a second constructor with numMinutes and numMessages parameters.

/* Your solution goes here  */
PhonePlan::PhonePlan(int numMinutes, int numMessages){
    freeMinutes = numMinutes;
    freeMessages= numMessages;
    return;
}

void PhonePlan::Print() const {
   cout << "Minutes: " << freeMinutes << ", Messages: " << freeMessages << endl;
   return;
}

int main() {
   PhonePlan user1Plan;                // Calls default constructor
   PhonePlan user2Plan(1000, 5000);    // Calls newly-created constructor

   cout << "User1: ";
   user1Plan.Print();

   cout << "User2: ";
   user2Plan.Print();

   return 0;
}
