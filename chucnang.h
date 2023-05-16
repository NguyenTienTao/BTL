#include <iostream>

using namespace std;

void chooseFunc(string& guessedWord,const string& word, string& badGuesses, int& badGuessCount);

void unlockAlphabet(string& guessedWord, const string& word);

void rise1timeswrong(int& badGuessCount);

void decrease1timeswrong(int& badGuessCount);

void deletebadGuesses(string& badGuesses);

