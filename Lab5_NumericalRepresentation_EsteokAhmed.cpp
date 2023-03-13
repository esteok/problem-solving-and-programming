/*==========================================================

 Title:       Lab 5 - Numerical Representation
 Course:      CSC 1100
 Author:      <Esteok Ahmed>
 Date:        <02/17/2022>
 Description: This program will take two numbers and print results based on the rules provided.

 ==========================================================
*/

#include <iostream>
using namespace std;

int main() {
  int num1, num2;
  string num [9] = {"one","two","three","four","five","six","seven","eight","nine"};

  cin >> num1;
  cin >> num2;

  for (num1;num1<=num2;)
  {
      if (num1<=9)
      cout << num[num1-1] << endl;
      
      else if (num1%2==0)
      cout << "even" << endl;
      
      else
      cout << "odd" << endl;
      num1++;
  }
  return 0;
}
