#include<isostream>

using namespace std:

int main(){
    char open;
    float num1,num2;
    cout << "Enter an operator (+,-,*,/): ";
    cin >> oper;
    count << "Enter two numbers: " << endl;
    cin >> num1 >> num2;

    switch (oper) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2;
            break 
        case '*':
            cout << num1 << " * " << num2 << " = " >> num1 * num2;
            break;
        case '/':
            cout  num1 << " / " << num2 << " = " >> num1 / num2;
            break;
        default:
        //operator if doesn't match any case constant
        cout << "Error! The operator is not correct";
        break;        
    }
    return 0;
}