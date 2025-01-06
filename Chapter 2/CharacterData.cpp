#include <iostream>
#include <string>
using namespace std;

//demonstrate how chars and strings can not be
//directly compared

int main(){

    string strvar = "b";
    char charvar = 'b';

    cout << ('b' == charvar) << endl;
    cout << ("b" == strvar) << endl;

    //count << ('a' == "a") << endl; // will give an error

    return 0;
}