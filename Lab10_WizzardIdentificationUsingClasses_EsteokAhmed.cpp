/*==========================================================

 Title:       Lab 11 - Wizard Identification using Classes
 Course:      CSC 1100
 Author:      <Esteok Ahmed>
 Date:        <03/31/2022>
 Description: This program will print the results of given input based on the rules defined.

 ==========================================================
*/

#include <iostream>
using namespace std;

class Wizard{
    private:
    int wizardAge;
    string wizardFirstName;
    string wizardLastName;
    int wizard_ID;
    
    public:
    int get_wizardAge(){
        return this->wizardAge;
    }
    void set_wizardAge(int wizardAge){
        this->wizardAge=wizardAge;
    }
    string get_wizardFirstName(){
        return this->wizardFirstName;
    }
    void set_wizardFirstName(string wizardFirstName){
        this->wizardFirstName=wizardFirstName;
    }
    string get_wizardLastName(){
        return this->wizardLastName;
    }
    void set_wizardLastName(string wizardLastName){
        this-> wizardLastName=wizardLastName;
    }
    int get_wizard_ID(){
        return this->wizard_ID;
    }
    void set_wizard_ID(int wizard_ID){
        this-> wizard_ID=wizard_ID;
    }
};
int main() {
//DO NOT MODIFY THE MAIN()!!!!
    int wizardAge, wizard_ID;
    string wizardFirstName, wizardLastName;
    
    cin >> wizardAge >> wizardFirstName >> wizardLastName >> wizard_ID;
    
    Wizard wiz;
    wiz.set_wizardAge(wizardAge);
    wiz.set_wizard_ID(wizard_ID);
    wiz.set_wizardFirstName(wizardFirstName);
    wiz.set_wizardLastName(wizardLastName);
    
    cout << wiz.get_wizardAge() << "\n";
    cout << wiz.get_wizardLastName() << ", " << wiz.get_wizardFirstName() << "\n";
    cout << wiz.get_wizard_ID();
    
    return 0;
}

