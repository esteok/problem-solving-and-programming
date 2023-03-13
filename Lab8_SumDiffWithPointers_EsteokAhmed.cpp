/*=========================================================
 Title:       Lab 8 - Sum/Difference with Pointer
 Course:      CSC 1100
 Author:      <Esteok Ahmed >
 Date:        <03/08/2022>
 Description: This program will use our created function to modify
 the values of x and y and the value of y will be the absolute difference
 of x and y.
 ==========================================================*/

#include <iostream>
#include <cmath>
using namespace std;

void Modify(int *x, int *y) {
    *x = *x + *y;
    *y = *x - 2 **y;
    if (*y < 0){
        *y = *y*-1;
    }
    
}

int main() {
    //DO NOT MODIFY ANYTHING IN THE main() !!!
    
    int x, y;
    
    int *ptr_x = &x;
    int *ptr_y = &y;
    
    cin >> x;
    cin >> y;
    
    Modify(ptr_x, ptr_y);
    
    cout << x << endl;
    cout << y;
                 
    return 0;
}

