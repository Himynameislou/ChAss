//
//  9 3 3 deallocating memory.cpp
//  WGU Tester
//
//  Created by Luis Vegerano on 12/9/20.
//

#include <stdio.h>
#include <iostream>
using namespace std;

class PaintContainer {
   public:
      ~PaintContainer();
      double gallonPaint;
};

PaintContainer::~PaintContainer() { // Covered in section on Destructors.
   cout << "PaintContainer deallocated." << endl;
   return;
}

int main() {
   PaintContainer* kitchenPaint;

   kitchenPaint = new PaintContainer;
   kitchenPaint->gallonPaint = 26.3;

   /* Your solution goes here  */
    delete kitchenPaint;

   return 0;
}
