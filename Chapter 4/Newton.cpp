#include <iostream>
using namespace std;

//This program will take the user input of a number and find its square
//It will make 20 guesses based on Newtons Method
//It will then output the square root of a number 

double squareroot(double n) {

    double root = n / 2;

    for (int i = 0; i < 20; i++) {
        root = (0.5) * (root + (n / root));
    }

    return root;
}

int main() {
    double userInput;
    cout << "Enter the number to calculate its square root: ";
    cin >> userInput;

    cout << "The square root of " << userInput << " is: " << squareroot(userInput) << endl;

    return 0;

}