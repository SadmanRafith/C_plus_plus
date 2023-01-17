#include <iostream>
using namespace std;

int main() {
    // Get the number for which to calculate the factorial
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // Initialize the factorial to 1
    int factorial = 1;

    // Initialize the loop counter
    int i = 1;

    // Use a do-while loop to calculate the factorial
    do {
        // Multiply the current value of the factorial by the loop counter
        factorial *= i;

        // Increment the loop counter
        i++;
    } while (i <= n);  // Continue looping as long as the counter is less than or equal to n

    // Print the result
    cout << "The factorial of " << n << " is: " << factorial << endl;

    return 0;
}
