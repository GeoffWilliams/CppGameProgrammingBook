/* 
 * File:   pointing.cpp
 * Author: geoff
 *
 * Created on September 2, 2012, 11:32 AM
 */

#include <cstdlib>
#include <iostream>

using namespace std;


/*
 * 
 */
int main(int argc, char** argv) {
    int* pAPointer;
    int* pScore = 0;
    
    int score = 1000;
    pScore = &score;
    
    cout << "Assigning &score to pScore\n";
    cout << "&score is: " << &score << endl;
    cout << "pScore is: " << pScore << endl;
    cout << "score is: " << score << endl;
    cout << "*pScore is: " << *pScore << endl << endl;
    
    cout << "Adding 500 points to score" << endl;
    score += 500;
    cout << "score is: " << score << endl;
    cout << "*pScore is: " << *pScore << endl << endl;
    
    cout << "Adding 500 points to *pScore" << endl;
    *pScore += 500;
    cout << "score is: " << score << endl;
    cout << "*pScore is: " << *pScore << endl << endl;
    
    cout << "Assigning &newScore to pScore" << endl;
    int newScore = 5000;
    pScore = &newScore;
    cout << "&newScore is: " << &newScore << endl;
    cout << "pScore is: " << pScore << endl;
    cout << "newScore is: " << newScore << endl;
    cout << "*pScore is: " << *pScore << endl << endl;
    
    cout << "Assigning &str to pStr" << endl;
    string str = "Score";
    string* pStr = &str;
    cout << "str is: " << str << endl;
    cout << "*pStr is: " << *pStr << endl;
    cout << "(*pStr).size() is: " << (*pStr).size() << endl;
    cout << "pStr->size() is: " << pStr->size() << endl;
    
    return 0;
}

