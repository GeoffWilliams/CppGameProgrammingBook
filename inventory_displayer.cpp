/* 
 * File:   inventory_displayer.cpp
 * Author: geoff
 *
 * Created on August 7, 2012, 8:25 PM
 */

#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;

void display(const vector<string>& inventory);
/*
 * 
 */
int main(int argc, char** argv) {
    vector<string> inventory;
    inventory.push_back("sword");
    inventory.push_back("armor");
    inventory.push_back("shield");
    
    display(inventory);
    return 0;
}

void display(const vector<string>& vec) {
    cout << "Your items: \n";
    for (vector<string>::const_iterator iter = vec.begin() ; 
            iter != vec.end() ; ++iter) {
        cout << *iter << endl;
    }
    
}
