#include <iostream>
using namespace std;

//outputs the value of a variable
//as well as the memory address in cpp

int main(){
    int varN = 101;
    cout << varN << endl;
    cout << &varN << endl; //outputs the memory address of a variable
    return 0;
}