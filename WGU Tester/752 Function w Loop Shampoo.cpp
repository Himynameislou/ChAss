//
//  752 Function w Loop Shampoo.cpp
//  WGU Tester
//
//  Created by Luis Vegerano on 11/18/20.
//

#include <stdio.h>
#include <iostream>
using namespace std;

void PrintShampooInstructions(int numCycles){

	if(numCycles < 1){
		cout << "Too few." << endl;
	}
	else if(numCycles > 4){
		cout << "Too many." << endl;
	}
	else {
		for (int i = 1; i <= numCycles; ++i) {
			cout << i << ": Lather and rinse." << endl;
		}
		cout << "Done." << endl;
	}
	//return;
}

int shampoo() {
   PrintShampooInstructions(2);

   return 0;
}
