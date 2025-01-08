#include <iostream>
using namespace std;

//function will multiply a number by 2
//user will input their number

int timesTwo(int num) {
    return num * 2;
}

int main() {
    int userInput;

    cout << "Enter the number you want to multiply by 2: ";
    cin >> userInput;

    cout << "Your number multiplied by 2 equals to: " << timesTwo(userInput) << endl;

    return 0;
}
