/*==========================================================

 Title:     Lab 12 - C++ Wizard Creature Department

 Course:  	CSC 1100
 Author:  	<Esteok Ahmed>
 Date:    	<04/14/2022>
 Description: This program will create 3 classes and 3 objects
 from classes that are called in the main.

 ==========================================================
*/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Creature{
   private:
       string name;
       int quantity;
       string type;
   public:
       Creature(){
          
       }
       Creature(string s1,int i1){
           name=s1;
           quantity=i1;
           type="unknown";
       }
       void setName(string s){
           name=s;
       }
       void setQuantity(int i){
           if(i<0){
               quantity=abs(i);
           }
           else quantity=i;
       }
       void setType(string s){
           type=s;
       }
       string getType(){
           return type;
       }
       string getName(){
           return name;
       }
       int getQuantity(){
           return quantity;
       }
       void printStatement(){
           cout<<"There's "<< quantity<<" of creature's named "<< name<<endl;
       }
      
};

class Phoenix:public Creature{
   public:
       string color;
   public:
       Phoenix(){
           setType("Phoenix");
       }
       void printStatement(){
            cout<<"There's "<<getQuantity()<<" "<<color<<" phoenixes named "<<getName()<<endl;
       }
       void setColor(string s){
           color=s;
       }
       string getColor(){
           return color;
       }
};

class Basilisk:public Creature{
   public:
       Basilisk(){
           setQuantity(1);
           setType("basilisk");
       }
       void printStatement(){
         
           cout<<"There's "<< getQuantity()<<" "<< getType() <<" named "<< getName() <<endl;
       }
};

int main(){
   int i;
   string nameArr[3];
   for(i=0;i<2;i++){;
       cin>>nameArr[i];
   }
   nameArr[2]="Clover";
   Creature c(nameArr[0],2);
   c.printStatement();
  
   Phoenix p;
   p.setName(nameArr[1]);
   p.setQuantity(3);
   p.setColor("golden");
   p.printStatement();
  
   Basilisk b;
   b.setName(nameArr[2]);
   b.printStatement();
}

