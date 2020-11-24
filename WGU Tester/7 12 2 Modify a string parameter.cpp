//
//  7 12 2 Modify a string parameter.cpp
//  WGU Tester
//
//  Created by Luis Vegerano on 11/24/20.
//

#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

void MakeSentenceExcited(string& sentenceText) {

   int i = 0;
   
   for(i = 0; i < sentenceText.size(); ++i){
      if(sentenceText.at(i) == '.'){
         sentenceText.at(i) = '!';
      }
   }

}

int main() {
   string testStr;

   testStr = "Hello. I'm Miley. Nice to meet you.";
   MakeSentenceExcited(testStr);
   cout << testStr;

   return 0;
}
