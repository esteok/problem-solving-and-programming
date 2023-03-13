/*==========================================================

 Title:       Lab4 - Giftbox to Tricity
 Course:      CSC 1100
 Author:      <Esteok Ahmed>
 Date:        <02/08/2022>
 Description: This program will calculate the pythagorean theorem of a missing side

 ==========================================================
*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float side1, side2, hypotenuse;
    
    cin >> side1;
    cin >> side2;
    
    cout << (side1 == side2) << endl;
    cout << (side1 < side2) << endl;
    cout << (side1 > side2) << endl;
  
    
    side1 = pow(side1, 2);
    side2 = pow(side2, 2);
    hypotenuse = (round(sqrt(side1 + side2)));
    
    
    
    
    cout << "The hypotenuse of triangle equals to " << hypotenuse <<endl;
  
  
  return 0;
}



