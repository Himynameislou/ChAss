//
//  8  16 Salary Calculation with classes.cpp
//  WGU Tester
//
//  Created by Luis Vegerano on 12/5/20.
//

#include <stdio.h>
#include <iostream>
#include <limits>
#include <vector>
#include <string>
#include "TaxTableTools.hpp"

int GetInteger(const string userPrompt) {
   int inputValue = 0;

   cout << userPrompt << ": " << endl;
   cin >> inputValue;

   return inputValue;
}

// **********************************************************************

int main() {
   const string PROMPT_SALARY = "\nEnter annual salary (-1 to exit)";
   int annualSalary = 0;
   double taxRate = 0.0;
   int taxToPay = 0;
   int i = 0;
   vector<int> salaryBase(5);
   vector<double> taxBase(5);

   TaxTableTools table;

   salaryBase.at(0) = 0;
   salaryBase.at(1) = 20000;
   salaryBase.at(2) = 50000;
   salaryBase.at(3) = 100000;
   salaryBase.at(4) = numeric_limits<int>::max();

   taxBase.at(0) = 0.0;
   taxBase.at(1) = 0.10;
   taxBase.at(2) = 0.20;
   taxBase.at(3) = 0.30;
   taxBase.at(4) = 0.40;

   // FIXME: Call a setter function in the TaxTableClass that supplies new tables for
   //        the class to work with. The function should be called with:
   //        table.setTables(salary, taxRate);

   // Get the first annual salary to process
   annualSalary = GetInteger(PROMPT_SALARY);

   while (annualSalary >= 0) {
      taxRate = table.GetValue(annualSalary);
      taxToPay = static_cast<int>(annualSalary * taxRate);   // Truncate tax to an integer amount
      cout << "Annual Salary: " << annualSalary <<
              "\tTax rate: " << taxRate <<
              "\tTax to pay: " << taxToPay << endl;

      // Get the next annual salary
      annualSalary = GetInteger(PROMPT_SALARY);
   }

   return 0;
}
