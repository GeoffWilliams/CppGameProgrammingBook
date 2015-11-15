/* 
 * File:   referencing.cpp
 * Author: geoff
 *
 * Created on August 2, 2012, 11:01 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int myScore = 1000;
    int &mikesScore = myScore;
    
    cout << "myScore is " << myScore << "\n";
    cout << "mikesScore is " << mikesScore << "\n\n";
    
    cout << "Adding 500 to myScore\n";
    myScore += 500;
    cout << "myScore is " << myScore << "\n";
    cout << "mikesScore is " << mikesScore << "\n\n";
    
    cout << "adding 500 to mikesScore\n";
    mikesScore += 500;
    cout << "myScore is " << myScore << "\n";
    cout << "mikesScore is " << mikesScore << "\n\n";
    
    return 0;  
}

