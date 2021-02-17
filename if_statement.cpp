
#include<isostream>
using naespace std;

int main(){
    int number;

    cout << "Enter an integrer: ";
    cin  >> number;

    // checks if the number is positive
    if(number > 0){
        cout << "You have entered a positive integer: " << number << end     
    }
    cout << "This statement is always executed.";
    
    return 0;
}