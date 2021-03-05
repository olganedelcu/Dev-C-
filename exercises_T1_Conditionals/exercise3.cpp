/* 
Write a C++ program that reads an integer value on the keyboard and prints if it is an even or an odd
number. If the number is even, prints if it is divisible by 3. 
*/

#include <iostream>

using namespace std;

int main(){
    int c,even,mult3;

    cout << "Introduce an integer: ";
    cin >> c;
    even = c % 2;
    mult3 = c % 3;
    if (even == 0){
        // even if remmainder is 0
        cout << "The number "  << c << " is even.\n";
        if (mult3 == 0)
        cout << "The number " << c << " is divisible by 3 and it's even";
    }else{
        cout << "The number is ODD";
    }

    return 0;

}
