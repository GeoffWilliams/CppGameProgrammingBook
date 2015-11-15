/* 
 * File:   simple_critter.cpp
 * Author: geoff
 *
 * Created on December 2, 2012, 7:19 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;


class Critter {
public:
    int m_Hunger;
    void Greet();
};

void Critter::Greet() {
    cout << "Hi.  I'm a critter.  My hunger level is " << m_Hunger << ".\n";
    
}

/*;
 * 
 */
int main(int argc, char** argv) {
    Critter crit1;
    Critter crit2;
    
    crit1.m_Hunger = 9;
    crit2.m_Hunger = 3;
    
    cout << "crit 1 hunger" << crit1.m_Hunger << "\n";
    cout << "crit 2 hunger" << crit2.m_Hunger << "\n";
    
    crit1.Greet();
    crit2.Greet();
    
    return 0;
}

