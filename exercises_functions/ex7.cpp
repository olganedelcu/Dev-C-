// Based on the functions created in 1 and 6, develop a function named approximation_e to
// calculate an approximation to the number ex with precision n according to the following formula:
// The function must receive two parameters: n (integer value >= 0) and x (real). The function must
// return a real value with the approximation to ex (real). 

#include <iostream>
using namespace std;


double power(double x,int n);
double factorial(double a);
double approximation_e(int n,double x);

int main(void){
   
   double precision;
   double x;
   double result;

    do{
        cout << "Enter precision (>0): ";
        cin >> precision;
    }while(precision <= 0);
   
    cout << "Enter x: ";
    cin >> x;
    
    result = approximation_e(precision,x);

    cout << "x = " << x << ";  precission = " << precision << ";  approximation = " << result << "\n";   
    return 0;
}

double approximation_e(int n,double x){
    double result;
    int z;

    for (z= 0;z <=n;z++){
        result +=  power(x, z) / factorial(z);
    }

    return result;
}

double power(double x,int n){
    int i;
    double powerResult = 1;
    
    for(i=1; i<= n; i++){
        powerResult = powerResult * x;
    }
    
    return powerResult;
}

double factorial(double a){
    int i;
    double factorialResult = 1;

    for(i=1; i<= a; i++){
        factorialResult = factorialResult * i;
    }
    
    return factorialResult;
}


