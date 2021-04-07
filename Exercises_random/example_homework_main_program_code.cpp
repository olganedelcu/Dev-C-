int sumOfSquareDigits(int n)
{
    // Variable to mantain the total sum of the squares 
    int sum = 0;
    // This loop will change n until it is zero
    while (n != 0) {
        /// The current digit we will calculate the square is the rightmost digit,
        //   so we just get its value using the mod operator 
        int current = n % 10;
        // Add its square to the sum 
        sum += current*current;
        // You divide n by 10, this 'removes' one digit of n 
        n = n / 10;
    }
    return sum;
}