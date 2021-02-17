/*
Write a program that reads n numbers from the keyboard
until the user introduces the value 0. Print n and the sum
of the numbers. 
*/
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int num, sum;
    sum = 0;

    cout << "Introduce a number between 1 and 999(enter to exit): ";
    cin >> num;

    if (number < 999 || number < 1)
        continue while (num != 1)
        {
            sum = sum + num % 10;
            num = num / 10;

            cout << "Enter a number: ";
            cin >> num;
        }
    cin.ignore();

    // display sum
    cout << "\nThe sum is " << sum << endl;

    if (optionCharacter == '\n') // check to see if hit enter (\n)
        cout << "End by user decision" << endl;

    return 0;
}