#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int num,val, sum;
    sum = 0;
    num = 0;

    cout << "Introduce a number between 1 and 999(enter to exit): ";
    cin >> val;

    if (val < 999 || val < 1)
    // This loop will change val until it is one
    	while (sum != 1) {
        	/// The current digit we will calculate the square is the rightmost digit,
        	//   so we just get its value using the mod operator 
        	num = val;
			int current = num % 10;
        	// Add its square to the sum 
        	sum += current*current;
        	// You divide n by 10, this 'removes' one digit of n 
        	num = num / 10;
        	cout << "The sum of the squares = " << sum << endl;
    	};
    if (num == 1)
    cout << val << " is a Happy Number!" << endl;
    

    // display sum
    cout << "\nThe sum is " << sum << endl;

    if (num == '\n') // check to see if hit enter (\n)
        cout << "End by user decision" << endl;

    return 0;
}
