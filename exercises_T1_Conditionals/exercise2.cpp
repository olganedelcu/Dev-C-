/* 
Write a C++ program that reads two integer numbers on the keyboard and prints if the first of them is
divisible by the second one. 
*/
#include <iostream>

using namespace std;

int main(void){
    int x,y,r;

    cout << "Enter one number: ";
    cin >> x;
    cout << "Enter second number: ";
    cin >> y;
	
	r = x % y;
	
    if ( r == 0){
        cout << "The first number " << x << " is divisible by the second " << y;
    }else{
        cout << "The first number " << x << " is NOT divisible by the second " << y;
    }

}
