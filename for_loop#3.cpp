#include<iostream>
using namespace std;

// Find the sum of the first n Natural Numbers
 
int main(){
    char num,sum;
    sum = 0;

    cout << "Introduce a Natural number: ";
    cin << num;

    for (int count = 1; count <= num; ++count) {
        sum += count;
    }

    cout << "Sum = " << sum << endl;

    return 0;
}