/*==========================================================

 Title:       Lab 11 -  Arena Area Inheritance
 Course:      CSC 1100
 Author:      <Esteok Ahmed>
 Date:        <04/07/2022>
 Description: This program will print the results of given input based
 on the rules defined above.

 ==========================================================
*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Arena {
    public:
    int radius;
    void display(){
        float radsq = radius *radius;
        cout <<""<<radsq;
    }
};
class ArenaArea :public Arena{
    public:
    void scan_input(){
        cin >> radius;
    }
    void display(){
        float Area = 3.14*radius*radius;
        cout << "" << Area;
    }
};

int main()
{
    //DO NOT MODIFY ANYTHING IN THE main() !!!
    
    ArenaArea stadium; //Declaring ArenaArea object stadium
    
    stadium.scan_input(); //Read the radius input
    
    stadium.Arena::display(); //Print the radius squared
    
    cout << endl;
    
    stadium.display(); //Print the area of the Arena (stadium) object
    
    return 0;
}

