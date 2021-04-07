// Based on the functions created in 1 and 6, develop a function named approximation_e to
// calculate an approximation to the number ex with precision n according to the following formula:
// The function must receive two parameters: n (integer value >= 0) and x (real). The function must
// return a real value with the approximation to ex (real). 

#include <iostream>
using namespace std;


double power(double x,int n);
int factorial(int a);

int main(void){
   
   
   
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

double factorial(int a){
    int i;
    int factorialResult = 1;

    for(i=1; i<= a; i++){
        factorialResult = factorialResult * i;
    }
    
    return powerResult;
}