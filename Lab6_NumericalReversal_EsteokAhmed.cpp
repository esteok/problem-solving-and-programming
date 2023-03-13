/*==========================================================

 Title:       Lab 6 - Numerical Reversal
 Course:      CSC 1100
 Author:      <Esteok Ahmed>
 Date:        <02/22/2022>
 Description: This program take two inputs, one for the amount of numbers to
 store in an array and for the numbers to store and reverse it.

 ==========================================================
*/

#include <iostream>
using namespace std;

int main() {
  int num1, i; //declare variable type
  cin >> num1;//input for array storage amout
  
  int numbers[num1];//assigning array to input
  
  for (i=0;i<num1;) //for loop to take input
  {
      cin >> numbers[i]; //taking input for numbers to be stored in to array
      i++;
  }
  for (i=num1-1;i>=0;) //for loop to output numbers backwards
  {
      cout << numbers[i] <<" "; //print new array
      i--;
  }
  return 0;
}




