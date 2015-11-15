/* 
 * File:   inventory_pointer.cpp
 * Author: geoff
 *
 * Created on September 2, 2012, 2:03 PM
 */

#include <cstdlib>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

string* ptrToElement(vector<string>* const pVec, int i);
/*
 * 
 */
int main(int argc, char** argv) {
    vector<string> inventory;
    inventory.push_back("sword");
    inventory.push_back("armor");
    inventory.push_back("shield");
    
    cout << "Sending the object pointed to by returned pointer\n";
    cout << *(ptrToElement(&inventory, 0)) << endl << endl;
    
    cout << "Assigning the returned pointer to another pointer \n";
    string* pStr = ptrToElement(&inventory, 1);
    cout << "Sending the object pointed to by the new pointer to cout:\n";
    cout << *pStr << endl << endl;
    
    cout << "Assigning object pointed to by pointer to a string object\n";
    string str = *(ptrToElement(&inventory,2));
    cout << "Sending the new string object to cout: \n";
    cout << str << endl << endl;
    
    cout << "Altering an object through a returned pointer.\n";
    *pStr = "healing potion";
    cout << "Sending the altered object to cout:\n";
    cout << inventory[1] << endl;
    return 0;
}

string* ptrToElement(vector<string>* const pVec, int i) {
    return &((*pVec)[i]);
}