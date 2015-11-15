/* 
 * File:   swap.cpp
 * Author: geoff
 *
 * Created on August 2, 2012, 11:18 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;


void badSwap(int x, int y);
void goodSwap(int& x, int& y);
/*
 * 
 */
int main(int argc, char** argv) {
    int myScore = 150;
    int yourScore = 1000;
    cout << "Original values\n";
    cout << "myScore " << myScore << "\n";
    cout << "yourScore " << yourScore << "\n";
    
    cout << "calling badSwap()\n";
    badSwap(myScore, yourScore);
    cout << "myScore " << myScore << "\n";
    cout << "yourScore " << yourScore << "\n";
    
    cout << "calling goodSwap()\n";
    goodSwap(myScore, yourScore);
    cout << "myScore " << myScore << "\n";
    cout << "yourScore " << yourScore << "\n";
    return 0;
}

void badSwap(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
}

void goodSwap(int& x, int& y) {
    int temp = x;
    x = y;
    y = temp;
}