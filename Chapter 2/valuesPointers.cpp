#include <iostream>
using namespace std;

//demonstrates what happens when you dereference 
//a pointer

int main(){
    int varN = 9;
    int *ptrN = &varN; //ptrN points to varN address

    cout << "varN Value: " << varN << endl;
    cout << "varN Location: " << ptrN << endl;
    cout << "deference ptrN: " << *ptrN << endl;

    return 0;
    
}