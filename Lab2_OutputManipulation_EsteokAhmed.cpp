/*==========================================================

 Title:       Lab2 - Output Manipulation
 Course:      CSC 1100
 Author:      <Esteok Ahmed>
 Date:        <01/27/2022>
 Description: This program we will be using the setfill and setw manipulator.

 ==========================================================
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << "ten" << setfill(' ') << setw(18) << "fourfour" << endl;
    cout << setfill('-') << setw(80) << "" << endl;
    return 0;
}

