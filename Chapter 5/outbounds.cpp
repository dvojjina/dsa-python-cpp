#include <iostream>
using namespace std;

//demonstrate what happens when iterating outside of an array
//outputs the location of the value in memory

int main(){
    int myarray[] = {2,4,6,8};
    for(int i = 0; i <= 8; i++){
        cout << myarray[i] << endl;
        cout << "id: " << &myarray[i] << endl;
    }

    return 0;
}