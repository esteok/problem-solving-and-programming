/*==========================================================

 Title:     Lab 9 - C++ Basketball Season
 Course:  	CSC 1100
 Author:  	<Esteok Ahmed>
 Date:    	<03/22/2022>
 Description: This program will assign a value to the pointer array for five
 games. Then the program will check the score, add points to the game, and
 display an updated score.

 ==========================================================
*/

#include <iostream>
using namespace std;

void alterGameScore(int a[], int n) {
    int num;
    cin >> num;
    a[n] += num;
}

int totalScore(int a[], int length) {
    int total = 0;
    for (int i = 0; i < length; i++)
    {
        total += a[i];
    }
    return total;
}
void printScores(int a[], int length) {
    for (int i = 0; i < length; i++)
    {
        cout << a[i] << " ";
    }
}
int main() {

	const int SIZE = 5;
	int* pArr;
	pArr = new int[SIZE];

	for (int i = 0; i < SIZE; i++) 
    		*(pArr + i) = ((i + 2) * 10) + (i + 1); 
	int numberOfGame;
	//cout << "Enter game to check: ";
	cin >> numberOfGame;
	alterGameScore(pArr, numberOfGame - 1);
	//cout << "new value: ";
	cout << *(pArr + numberOfGame - 1) << endl;
	printScores(pArr, SIZE);
	//cout << "\ntotal Score: ";
	cout << endl << totalScore(pArr, SIZE);

}

