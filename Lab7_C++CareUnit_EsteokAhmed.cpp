/*==========================================================

 Title:   Lab 7 - C++ Care Unit
 Course:  	CSC 1100
 Author:  	<Esteok Ahmed>
 Date:    	<03/03/2022>
 Description: This program will use four functions to find the BMI and convert it. 

 ==========================================================
*/

#include <iostream>
#include <cmath>
using namespace std;

double conversionMeters(double height_in_feet){
    return height_in_feet / 3.281;
}
double BMIcalculator(double w1){
    return w1 / (1.8 * 1.8);
}
double BMIcalculator(float w1, double height_in_meters){
    float BMI = w1 / (pow(height_in_meters, 2));
    return BMI;
}
void swap(float w1, float w2){
    float w = w1;
    w1 = w2;
    w2 = w;
}
int main() {
    double w1, w2, h;
    cin >> w1 >> w2 >> h;

    float index1 = BMIcalculator(w1);
    float index2 = BMIcalculator(w2, conversionMeters(h));

    cout << index1 << " " << index2 << endl;

    swap(w1, w2);

    index1 = BMIcalculator(w1);
    index2 = BMIcalculator(w2, conversionMeters(h));
    cout << index1 << " " << index2 << endl;
}
