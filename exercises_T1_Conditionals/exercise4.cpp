/* 
Write a C++ program that reads two integer numbers on the keyboard and prints the largest of them.
Consider the case when the two values are equal.
*/
#include <iostream>

using namespace std;

int main(void){
    int a,b;
    cout << "Introduce a number: ";
    cin >> a;
    cout << "Introduce a number: ";
    cin >> b;

    if (a < b){
        cout << "The largest number is " << b;
    }else if (a = b){
        cout << "The numbers are equal ";
    }else{
        cout << "The largest number is " << a;

    }

}