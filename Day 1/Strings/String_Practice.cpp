#include <iostream>
#include "String_Practice.h"
using namespace std;

void CountVowels(string word) {
    // Your code here
    int a = 0;
    int e = 0;
    int i = 0;
    int o = 0;
    int u = 0;
    for (int k = 0; k < word.length(); k++) {
        char letter = word[k];
        if (letter == 'a') {
            a++;
        }
        else if (letter == 'e') {
            e++;
        }
        else if (letter == 'i') {
            i++;
        }
        else if (letter == 'o') {
            o++;
        }
        else if (letter == 'u') {
            u++;
        }
    }

    cout << "A: " << a << endl;
    cout << "E: " << e << endl;
    cout << "I: " << i << endl;
    cout << "O: " << o << endl;
    cout << "U: " << u << endl;
}

string Shout(string word) {
    // Your code here
    int len = word.length();
    for (int i = 0; i < len; i++) {
        word[i] = toupper(word[i]);
        word += "!";
    }

    return word;
}

string RemovePunctuation(string word) {
    string str = "";

    int len = word.length();
    for (int i = 0; i < len; i++) {
        if (!ispunct(word[i])) {
            str += word[i];
        }
    }

    return str;
}
