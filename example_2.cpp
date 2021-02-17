#include<iostream>
using namespace std;

// Globall declaration
int a=5;
int main(){
    // Local variable declaration 
    int a =1,b=2,c=0;
    c=a+b;
    cout << c;

    return 0;
}
{
    //Local variable declaration
    int b=4,c=0;
    c=a + b; // a is a global variable
    cout << c;

    return 0

}