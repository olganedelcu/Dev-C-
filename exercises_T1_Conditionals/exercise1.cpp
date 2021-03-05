/* . Write a C++ program that reads an integer number from the keyboard and prints a message if it is
larger than 100 */
#include <iostream>

using namespace std;

int main(void) {

    int x;
    cout << "Enter a number: ";
    cin >> x;

    if (x <= 100){
        cout << x << " is smaller than 100. \n";
    }else {
        cout << x << " is larger than 100. \n";
    }

    return 0;

}
