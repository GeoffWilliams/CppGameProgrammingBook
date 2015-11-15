#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

const char X = 'X';
const char O = 'O';
const char EMPTY = ' ';
const char TIE = 'T';
const char NO_ONE = 'N';

void instructions();
char askYesNo(string question);
int askNumber(string question, int high, int low = 0);
char humanPiece();
void displayBoard(const vector<char>& board);
char winner(const vector<char>& board);
bool isLegal(const vector<char>& board);
int humanMove(vector<char>& board);
int computerMove(vector<char>& board);
void announceWinner(char winner, char computer, char human);

