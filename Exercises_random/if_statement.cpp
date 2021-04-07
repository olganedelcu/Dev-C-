
#include<iostream>
using namespace std;

int main(){
    int number;

    cout << "Enter an integrer: ";
    cin  >> number;

    // checks if the number is positive
    if(number > 0){
        cout << "You have entered a positive integer: " << number << endl;     
    }
    cout << "This statement is always executed.";
    
    return 0;
}
