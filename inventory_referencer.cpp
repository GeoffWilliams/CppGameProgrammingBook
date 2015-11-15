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

const string& refToElement(vector<string>& inventory, int i);
string& localRef();

/*
 * 
 */
int main(int argc, char** argv) {
    vector<string> inventory;
    inventory.push_back("sword");
    inventory.push_back("armor");
    inventory.push_back("shield");
    
    // display retunred ref - cheap
    cout << "Sending the returned reference to cout:\n";
    cout << refToElement(inventory, 0) << "\n\n";
    
    // assign one ref to another
    cout << "Assigning the returned reference to another reference\n";
    string& rStr = refToElement(inventory, 1);
    cout << "Sending the new reference to cout:\n";
    cout << rStr << "\n\n";
    
    // copy a string obj - expensive
    cout << "Assigning the returned reference to a string object.\n";
    string str = refToElement(inventory, 2);
    cout << "sending the new string object to cout:\n";
    cout << str << "\n\n";
    
    // alter through reference
    cout << "Altering an object through a returned reference.\n";
    rStr = "Healing Potion";
    cout << "Sending the altered object to cout:\n";
    cout << inventory[1] << endl;

    //cout << localRef();
    return 0;
}


const string& refToElement(vector<string>& vec, int i) {
    return vec[i];
}

//string& localRef() {
//    string localRef = "abc";
//    return localRef;
//}