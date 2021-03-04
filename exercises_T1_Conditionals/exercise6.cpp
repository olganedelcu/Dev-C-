// Write a C++ program to calculate the value of the function below for a value x introduced on the
// keyboard 
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float x, r;

    cout << "Enter number: ";
    cin >> x;

    if (x <= 0){
        r = x + 3;
        } else{
            // r = x*x + 2*x;
            r = pow(x,2) + 2*x;
        }
    
    cout << "x = " << x << " result = " << r;

    return 0;
}

// r stands out for result and there's a given function in the exercise