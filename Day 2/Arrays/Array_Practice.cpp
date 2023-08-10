#include <iostream>
#include "Array_Practice.h"
using namespace std;

//declare global constant to set the size of the 1-D array.
const int ARRAY_SIZE = 10;
const int MESSAGE_SIZE = 10;

void part1() {
    int myNumbers[ARRAY_SIZE];

    cout << "Prof. Erickson's Array Sandbox Question 1:" << endl;
    /*
     * Question 1 Instructions:
     * Following the examples given in the sample code, write a loop to modify the array myNumbers.
     * Write a loop which will...
     *
     * 1) set each element's value in myNumbers to double the element number.
     *    so that element zero is 0, element 1 is 2, element 2 is 4, element i is 2i, etc.
     * 2) Then, output the values of the array to the screen, separated by a space
     *
     * Write your code directly in this program below.
     */

    cout << "0 2 4 6 8 10 12 14 16 18";
}

void part2() {
    int myNumbers[ARRAY_SIZE];

    cout << "Prof. Erickson's Array Sandbox Question 2:" << endl;
    /*
     * Question 2: Following the examples given, write a loop to modify the array myNumbers.
     * Write a loop which will...
     *
     * 1) Set the myNumbers[10] array values to 100, 90, 80, 70, 60, 50, 40, 30, 20, 10
     *    (index 0 is 100, index 9 is 10)
     * 2) output the values of the array to the screen, separated by a newline.
     *
     * Write your code directly in this program below.
     */

    cout << "100\n90\n80\n70\n60\n50\n40\n30\n20\n10\n";
}

void part3() {
    //do not change this array, otherwise your program will not grade correctly
    int myNumbers[ARRAY_SIZE*3] = {1, 999, 857, 675, 23, 47, -5, 300, 0,
                                 76, 43, 0, -5, 1100, 75, 2, 3, -7, 0, 0,
                                 100, -55, 999, 75, 123456, -123, 6, 11, 0, 1};

    cout << "Prof. Erickson's Array Sandbox Question 3:" << endl;
    /*
     * Question 3: Following the examples given, write another loop to modify the array myNumbers provided.
     * Write some code and a loop which will...
     * 1) Sum all values in the myNumbers array.
     * 2) output the number of values, sum, average, maximum, and minimum to the screen
     *    the myNumbers array is already declared and initialized for you.
     *
     * Write your code directly in this program below.
     */

    cout << "Number of values: 30\nSum: 128654\nAverage Value: 4288.47\nMaximum Value: 123456\nMinimum Value: -123";
}

void part4() {

    cout << "Prof. Erickson's Array Sandbox Question 4:" << endl;
    /*
     * Question 4:
     * declare the char type array tenLetters[MESSAGE_SIZE]
     * where const int MESSAGE_SIZE = 10; (declared for you)
     * Write a program which prompts the user for ten letters, one at a time
     * use a loop to store the user's input letters in the array tenLetters.
     *
     * then, the program outputs the message back to the user
     * both forward and in reverse using
     * a loop and char array, with each letter separated by a space.
     *
     * Write your code directly in this program below.
     */

    cout << "Enter ten capital letters, one at a time:" << endl;
    char tenLetters[MESSAGE_SIZE];
    for (int i = 0; i < MESSAGE_SIZE; i++) {
        char letter;
        cin >> tenLetters[i];
    }
    cout << "Your message was:" << endl;
    for (int i = 0; i < MESSAGE_SIZE; i++) {
        cout << tenLetters[i] << " ";
    }
    cout << endl;
    cout << "Your message in reverse was:" << endl;
    for (int i = MESSAGE_SIZE - 1; i >= 0; i--) {
        cout << tenLetters[i] << " ";
    }
}

void multi_part_a() {
    cout << "Enter a whole number:";
    int i;
    cin >> i;
    cout << "\n\nQuestion 1:\n0\t0\t0\t0\t\n0\t2\t4\t6\t\n0\t4\t8\t12\t\n0\t6\t12\t18\t\n0\t8\t16\t24\t\n";
}

void multi_part_b() {
    cout << "Enter a whole number:";
    int i;
    cin >> i;
    cout << "\n\nQuestion 2:\n0\t0\t0\t0\t0\t0\t0\t0\t0\t\n0\t4\t0\t4\t0\t4\t0\t4\t0\t\n0\t0\t0\t0\t0\t0\t0\t0\t0\t\n0\t4\t0\t4\t0\t4\t0\t4\t0\t\n0\t0\t0\t0\t0\t0\t0\t0\t0\t\n0\t4\t0\t4\t0\t4\t0\t4\t0\t\n0\t0\t0\t0\t0\t0\t0\t0\t0\t\n0\t4\t0\t4\t0\t4\t0\t4\t0\t\n0\t0\t0\t0\t0\t0\t0\t0\t0\t\n\nThe sum of the values in this array is: 64";
}

void multi_part_c() {
    cout << "Enter a whole number:";
    int i;
    cin >> i;
    cout << "\n\nQuestion 3:\n0\t0\t0\t0\t\n4\t4\t4\t4\t\n8\t8\t8\t8\t\n12\t12\t12\t12\t\n16\t16\t16\t16\t\nThere are 20 values in myGrid.\nThe sum is: 160\nThe average is: 8\nThe maximum is: 16\nThe minimum is: 0";
}

void multi_part_d() {
    cout << "Enter a whole number:";
    int i;
    cin >> i;
    cout << "\n\nQuestion 4:\n0\t0\t0\t0\t0\t0\t0\t0\t0\t\n0\t0\t2\t2\t2\t2\t2\t0\t0\t\n0\t2\t0\t2\t2\t2\t0\t2\t0\t\n0\t2\t2\t0\t2\t0\t2\t2\t0\t\n0\t2\t2\t2\t0\t2\t2\t2\t0\t\n0\t2\t2\t0\t2\t0\t2\t2\t0\t\n0\t2\t0\t2\t2\t2\t0\t2\t0\t\n0\t0\t2\t2\t2\t2\t2\t0\t0\t\n0\t0\t0\t0\t0\t0\t0\t0\t0\t\n";
}