//
//  TaxTableTools.hpp
//  WGU Tester
//
//  Created by Luis Vegerano on 12/5/20.
//

#ifndef TaxTableTools_hpp
#define TaxTableTools_hpp

#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;

class TaxTableTools {
   public:
      TaxTableTools();
      double GetValue(int searchArgument);
   private:
      vector<int> search;
      vector<double> value;
      int nEntries;
};

#endif /* TaxTableTools_hpp */
