#include <iostream>
using namespace std;


int main() {
    // Usually declarations
    int maxInt = INT8_MAX;
    float maxFloat = __FLT_MAX__;
    char letter = 'a';
    char *word = "Hello"; //Char pointer
    bool sinal = true;

    // Anohter way to declare a variable
    decltype(maxInt) anotherInt;
    anotherInt = 10;

    cout <<"Int variable: "<< maxInt << endl;
    cout <<"Float variable: "<< maxFloat << endl;
    cout <<"char variable: "<< letter << endl;
    cout <<"char pointer variable: "<< word << endl;

    if (sinal) cout <<"bool variable: True"<< endl;
    else cout <<"bool variable: False"<< endl;
    
    cout <<"Anohter way to declare a variable:  "<< anotherInt << endl;

   

}
