//shows how to use a switch statement

#include <iostream>
using namespace std;

int main(){
     int grade;

     cout << "Enter your grade percentage: ";
     cin >> grade;

     int tempgrade = grade/10;
     switch(tempgrade) {

        case 10:
        case 9:
            cout << "The grade is A" << endl;
            break;
        case 8:
            cout << "The grade is B" << endl;
            break;
        case 7:
            cout << "The grade is C" << endl;
            break;
        case 6:
            cout << "The grade is D" << endl;
            break;
        default:
            cout << "The grade is F" << endl;
     }

     return 0;
}