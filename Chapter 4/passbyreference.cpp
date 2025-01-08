#include <iostream>
using namespace std;

//Interchanges the values located by variable1 and variable2

//This function does not return anything

void swap_values(int &variable1, int &variable2) {
    int temp;         //temporary storage for swap

    temp = variable1;
    variable1 = variable2;
    variable2 = temp;
}

int main() {
    int first_num, second_num;
    first_num = 7;
    second_num = 8;

    cout << "Two numbers before the swap function: 1) " << first_num << " 2) " << second_num << endl;
    swap_values(first_num, second_num);
    cout << "The numbers after the swap function: 1) " << first_num << " 2) " << second_num << endl;

    return 0;
}