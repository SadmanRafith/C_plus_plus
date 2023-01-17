#include <iostream>
using namespace std;

int main() {
    // Get the number from the user
    int number;
    cout << "Enter a number: ";
    cin >> number;

    // Initialize the sum and count to 0
    int sum = 0;
    int count = 0;

    // Use a for loop to sum the digits of the number
    for (int n = number; n > 0; n /= 10) {  // Divide n by 10 on each iteration to move to the next digit
        sum += n % 10;  // Add the last digit of n to the sum
        count++;  // Increment the count
    }

    // Calculate the average
    double average = static_cast<double>(sum) / count;

    // Print the results
    cout << "The sum of the digits is: " << sum << endl;
    cout << "The average of the digits is: " << average << endl;

  return 0;
}
