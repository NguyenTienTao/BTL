#include <bits/stdc++.h>

using namespace std;

void unlockAlphabet(string& guessedWord, const string& word) {
    int l = word.size();
    int x = rand() % l;
    char c = word[x];
    while(1) {
        if (guessedWord[x] == c) {
            x = rand() % l;
            c == word[x];
        }
        else break;
    }
    cout << "Congratulations! You unlocked a letter: " << c << endl;
    for (int i=0; i<l; i++) {
        if (word[i] == c) {
            guessedWord[i] = c;
        }
    }
}

void rise1timeswrong(int& badGuessCount){
    cout << "Sorry! You are rised 1 times wrong" << endl;
    badGuessCount ++;
    if (badGuessCount > 7) badGuessCount = 7;
}

void decrease1timeswrong(int& badGuessCount){
    if (badGuessCount > 0) {
        cout << "Congratulations! You are decreased 1 times wrong" << endl;
        badGuessCount--;
    }
}

void deletebadGuesses(string& badGuesses){
    cout << "You are deleted bad guesses" << endl;
    badGuesses = "";
}

void chooseFunc(string& guessedWord,const string& word, string& badGuesses, int& badGuessCount) {
    int n = rand() % 4;
    switch(n) {
        case 0: {
            unlockAlphabet(guessedWord, word);
            break;
        }
        case 1: {
            rise1timeswrong(badGuessCount);
            break;
        }
        case 2: {
            decrease1timeswrong(badGuessCount);
            break;
        }
        case 3: {
            deletebadGuesses(badGuesses);
            break;
        }
    }
}


