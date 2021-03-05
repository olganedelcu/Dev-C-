/* 
Write a C++ program that prints on the screen the price of a cinema ticket according to the age of the
customer. The program must read the user’s age and calculate the price as follows: (a) Normal ticket: 7
euros; (b) Children under 5: 60% discount; (c) People over 60: 55% discount. Use a constant to define
the normal ticket price
*/
#include <iostream>

using namespace std;

int main(){
    int p,a;
    float one,two;
    p = 7;
    cout << "Please introduce your age: ";
    cin >> a;
	one = (p-p*0.6);
	two = (p-p*0.55);
    if ( 5 <= a) && ( a <= 60){
        cout << "Ticket price will be: " << p;
    }else if (a < 6){
        cout << "Tickets price will be: "<< one;
    }else if (a > 60){
        cout <<  "Tickets price will be: "<< two;
    }

}
