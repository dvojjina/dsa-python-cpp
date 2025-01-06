#include <iostream>
using namespace std;

int main() {
    //declares num as a floating point number variable
    float num;

    //displays this text to the console
    cout << "Give me a number: " << endl;

// Uses cout to display the message "Give me a number:" to the console.
//<< is the output stream operator that directs the message into the console.
//endl is a manipulator that adds a newline, so the next output appears on a new line.

    //takes the user's input and stores it in num
    cin >> num;

//What It Does:

//Uses cin to take input from the user and stores it in the variable num.
//>> is the input stream operator that extracts data from the input stream (the keyboard).
//How It Works:

//When the user types a number and presses Enter, the number is assigned to the num variable

    //displays to the console
    cout << "This is your number doubled: " << num*2 << endl;

    return 0;
    }