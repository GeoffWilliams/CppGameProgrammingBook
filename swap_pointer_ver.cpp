/* 
 * File:   swap_pointer_ver.cpp
 * Author: geoff
 *
 * Created on September 2, 2012, 1:16 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

void badSwap(int x, int y);
void goodSwap(int* const pX, int* const pY);



/*
 * 
 */
int main(int argc, char** argv) {
    int myScore = 150;
    int yourScore = 1000;
    cout << "Original values\n";
    cout << "myScore: " << myScore << endl;
    cout << "yourScore: " << yourScore << endl << endl;
    
    cout << "Called badSwap()\n";
    badSwap(myScore, yourScore);
    cout << "myScore: " << myScore << endl;
    cout << "yourScore: " << yourScore << endl << endl;
    
    cout << "Calling goodSwap()\n";
    goodSwap(&myScore, &yourScore);
    cout << "myScore: " << myScore << endl;
    cout << "yourScore: " << yourScore << endl << endl;    
    
    return 0;
}

void badSwap(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
}

void goodSwap(int* const pX, int* const pY) {
    int temp = *pX;
    *pX = *pY;
    *pY = temp;
}
