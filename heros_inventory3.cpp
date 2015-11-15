/* 
 * File:   heros_inventory3.cpp
 * Author: geoff
 *
 * Created on July 29, 2012, 3:56 PM
 */

#include <cstdlib>
#include <string>
#include <vector>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    vector<string> inventory;
    inventory.push_back("sword");
    inventory.push_back("armor");
    inventory.push_back("shield");
    
    vector<string>::iterator myIterator;
    vector<string>::const_iterator iter;
    
    cout << "Your items\n";
    for (iter = inventory.begin(); iter != inventory.end(); ++iter) {
        cout << *iter << endl;
    }
    
    cout << "\nYou trade your sword for a battle axe.";
    myIterator = inventory.begin();
    *myIterator = "battle axe";
    cout << "\nYour items\n";
    for (iter = inventory.begin(); iter != inventory.end(); ++iter) {
        cout << *iter << endl;
    }
    
    cout << "\nThe item name'" << *myIterator << "' has";
    cout << (*myIterator).size() << " letters in it";
    
    cout << "\nThe item name '" << *myIterator << "' has";
    cout << myIterator->size() << " letters in it";
    
    cout << "\nYou recover a crossbow from a slain enemy.";
    inventory.insert(inventory.begin(), "crossbow");
    
    cout << "\nYour items\n";
    for (iter = inventory.begin(); iter != inventory.end(); ++iter) {
        cout << *iter << endl;
    }
    
    cout << "\nYour armor is destroyed in a fierce battle.";
    inventory.erase(inventory.begin() + 2);
    cout << "\nYour items\n";
    for (iter = inventory.begin(); iter != inventory.end(); ++iter) {
        cout << *iter << endl;
    }    
    
    return 0;
}

