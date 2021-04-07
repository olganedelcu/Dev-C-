// Write a function to calculate the n-th power of a number x –being n an integer value and
// x a double value. 

#include <iostream>
using namespace std;

double power(double x,int n);

int main(void){
    double base;
    int exponent;

    cout << "Enter base value: ";
    cin >> base;
    cout << "Enter exponent value: ";
    cin >> exponent;

    cout << base << " to the " << exponent << "-th power is " << power(base,exponent);
    return 0;
}

double power(double x,int n){
    int i;
    double powerResult = 1;
    
    for(i=1; i<= n; i++){
        powerResult = powerResult * x;
    }
    
    return powerResult;
}
