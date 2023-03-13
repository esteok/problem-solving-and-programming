/*==========================================================

 Title:      Lab 3 - Dragon Years
 Course:      CSC 1100
 Author:      <Esteok Ahmed>
 Date:        <02/01/2022>
 Description: This program will convert a dragon mount's age into wizard years.

 ==========================================================
*/

#include <iostream>
using namespace std;

int main() {
    string name;
  cin >> name;
    float age;
  cin >> age;
  
 float newAge = ((age - 2) * 4)+21;
  
  cout << "The dragon named " << name << " is " << newAge << " years old in wizard years.";
  
  return 0;
}


