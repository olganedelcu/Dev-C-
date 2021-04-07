// Develop a function named factorial to calculate the factorial of an integer number
#include <iostream>
using namespace std;

int factorial(int a);

int main(void){
    int number;

    cout << "Enter a value: ";
    cin >> number;

    cout <<  "The factorial of  " << number << " is " << factorial(number);
    return 0;
}

int factorial(int a){
    int i;
    int factorialResult = 1;

    for(i=1; i<= a; i++){
        factorialResult = factorialResult * i;
    }
    
    return powerResult;
}
