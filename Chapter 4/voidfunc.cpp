#include <iostream>
using namespace std;

//will use a void function to output the user's input * 2

void timesTwoVoid(int num) {
    cout << "Your number times 2 is: " << num * 2 << endl;
}

int main() {
    int userInput;

    cout << "Enter the number you want to multiply by 2: ";
    cin >> userInput;

    timesTwoVoid(userInput);

    return 0;
}