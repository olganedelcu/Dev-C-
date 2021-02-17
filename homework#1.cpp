/*
Write a program that reads n numbers from the keyboard
until the user introduces the value 0. Print n and the sum
of the numbers. 
*/
#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int num,sum;
    sum = 0;
    
    cout << "Introduce a number: ";
    cin >> num;

    while (num > 0) {
        sum += num;

        cout << "Enter a number: ";
        cin >> num;
    }

    // display sum
    cout << "\nThe sum is " << sum << endl;

    return 0;
}