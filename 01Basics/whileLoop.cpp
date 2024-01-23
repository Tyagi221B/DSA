#include <iostream>

using namespace std;

int main() {
    // Input an integer
    int n;
    cout << "Enter an integer: ";
    cin >> n;

    // Initialize sums for even and odd digits
    int sumEven = 0, sumOdd = 0;

    // Process each digit of the input integer
    while (n != 0) {
        int digit = n % 10;

        // Check if the digit is even or odd
        if (digit % 2 == 0) {
            sumEven += digit;  // Add to the sum of even digits
        } else {
            sumOdd += digit;   // Add to the sum of odd digits
        }

        // Move to the next digit
        n /= 10;
    }

    // Print the sum of even and odd digits
    cout << "Sum of even digits: " << sumEven << endl;
    cout << "Sum of odd digits: " << sumOdd << endl;

    return 0;
}
