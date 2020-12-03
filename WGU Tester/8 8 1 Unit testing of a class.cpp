//
//  8 8 1 Unit testing of a class.cpp
//  WGU Tester
//
//  Created by Luis Vegerano on 12/3/20.
//

#include <stdio.h>
#include <iostream>
using namespace std;

class InventoryTag {
public:
   InventoryTag();
   int getQuantityRemaining() const;
   void addInventory(int numItems);

private:
   int quantityRemaining;
};

InventoryTag::InventoryTag() {
    quantityRemaining = 0;
}

int InventoryTag::getQuantityRemaining() const {
   return quantityRemaining;
}

void InventoryTag::addInventory(int numItems) {
   if (numItems > 10) {
      quantityRemaining = quantityRemaining + numItems;
   }
}

int main() {
   InventoryTag redSweater;
   int sweaterShipment = 0;
   int sweaterInventoryBefore = 0;

   sweaterInventoryBefore = redSweater.getQuantityRemaining();
   sweaterShipment = 25;

   cout << "Beginning tests." << endl;

   // FIXME add unit test for addInventory

   /* Your solution goes here  */
    redSweater.addInventory(sweaterShipment);
    if (redSweater.getQuantityRemaining() != sweaterShipment) {
        cout << "   UNIT TEST FAILED: addInventory()\n";
    }

   cout << "Tests complete." << endl;

   return 0;
}
