#include <iostream>
#include <cmath>
#include<conio.h>
#include<stdio.h>

using namespace std;

int main(void)
{
    int num,val1,val2,val3,its, sum;
    sum = 0;
    num = 0;
    its = 1;
    char a ;
    a = getch();
    bool happy = false;

    cout << "Introduce a number between 1 and 999(enter to exit): ";
    cin >> num;

    while ((num > 999 || num < 1)){
        cout << "Number introduced is not in the range.Please enter another number: ";
        cin >> num;
    }
    	
    while (num != 1 &&  a != ' ' && its++){
        if (num < 10){
            val1 = num;
            val2 = 0;
            val3 = 0;
        }else if ((num > 10) && (num < 999)){
            val1 = num/10;
            val2 = num % 10;
            val3 = 0;
        }else {
            val1 = num/100;
            val2= (num%100)/10;
            val3=(num/100)%10;
        }
        sum = pow(val1,2) + pow(val2,2) + pow(val3,2);
        num = sum;
        num = a;
        cout << "Iteration: (" <<its<<") the sum of the squares of the digits if the number is: " << sum;
        
    }

    if (sum == 1){
    	cout << num << " is a Happy Number!" << endl;
	}
    

    // display sum
    cout << "\nThe sum is " << sum << endl;

    if (a == '\n') // check to see if hit enter (\n)
        cout << "End by user decision" << endl;
    
    return 0;
}
