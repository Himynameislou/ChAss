//
//  7 13 1 Modify a C string parameter.cpp
//  WGU Tester
//
//  Created by Luis Vegerano on 11/24/20.
//

#include <stdio.h>
#include <iostream>
#include <cstring>
using namespace std;

void MakeSentenceExcited(char* sentenceText) {

   int i = 0;
   
   for(i = 0; i < strlen(sentenceText); ++i){
      if(sentenceText[i] == '.'){
         sentenceText[i] = '!';
      }
   }
   return;

}

int main() {
   const int TEST_STR_SIZE = 50;
   char testStr[TEST_STR_SIZE];

   strcpy(testStr, "Hello. I'm Miley. Nice to meet you.");
   MakeSentenceExcited(testStr);
   cout << testStr << endl;

   return 0;
}
