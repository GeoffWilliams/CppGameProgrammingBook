/* 
 * File:   tripple.cpp
 * Author: geoff
 *
 * Created on August 1, 2012, 11:36 PM
 */

#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;


int tripple(int number);
string tripple(string tripple);
/*
 * 
 */
int main(int argc, char** argv) {
    cout << "Tripling 5: " << tripple(5) << "\n\n";
    cout << "Tripling 'gamer': " << tripple("gamer") << "\n\n";
    
    
    return 0;
}

int tripple(int number) {
    return number * 3;
}

string tripple(string text) {
    return text + text + text;
}


