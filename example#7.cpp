#include<iostream>
#include<cmath>
using namespace std;
 
int main()
{
    int val, num,a, sum = 0;
 
    cout << "Enter the number : ";
    cin >> val;
    num = val;
    while (num != 0)
    {
        sum = sum + a % 10;
        num = num / 10;
        a = pow(num,2);
    }
    cout << "The sum of the square of the digits of "
         << val << " is " << sum;
}
