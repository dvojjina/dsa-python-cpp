//show how to use conditionl statements in CPP

#include <iostream>
using namespace std;

int main(){

    int grade;

    cout << "Enter your grade percentage: ";
    cin >> grade;

    if (grade < 60) {
        cout<<'F'<< endl;
    }
    else {
        if (grade < 70) {
            cout<<'D'<< endl;
        }
        else {
            if (grade < 80) {
                cout<<'C'<< endl;
            }
            else {
                if (grade < 90) {
                    cout<<'B'<< endl;
                }
                else {
                    cout<<'A'<< endl;
                }
            }
        }
    }
    return 0;
}