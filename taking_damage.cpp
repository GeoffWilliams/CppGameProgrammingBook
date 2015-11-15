/* 
 * File:   taking_damage.cpp
 * Author: geoff
 *
 * Created on August 1, 2012, 11:43 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;


int radiation(int health);

/*
 * 
 */
int main(int argc, char** argv) {
    int health = 80;
    cout << "Your health is " << health << "\n\n";
    
    for (int i = 0 ; i < 3 ; i++) {
        health = radiation(health);
        cout << "After radiSation exposure your health is " << health << "\n\n";
    }
    return 0;
}

inline int radiation(int health) {
    return health / 2;
}