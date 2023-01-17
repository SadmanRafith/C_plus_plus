#include <iostream>
using namespace std;

int main() {
    // Initialize the variables for the two previous numbers in the sequence
    int a = 0;
    int b = 1;

    // Initialize the variable for the current number in the sequence
    int c;

    // Get the number of terms to generate from the user
    int n;
    cout << "Enter the number of terms to generate: ";
    cin >> n;

    // Print the first two terms of the sequence
    cout << "The Fibonacci sequence is: " << a << " " << b << " ";

    // Initialize the loop counter
    int i = 2;

    // Use a do-while loop to generate the remaining terms of the sequence
    do {
        // Calculate the next term of the sequence
        c = a + b;

        // Print the current term
        std::cout << c << " ";

        // Update the variables for the next iteration of the loop
        a = b;
        b = c;

        // Increment the loop counter
        i++;
    } while (i < n);  // Continue looping as long as the counter is less than n

    cout << endl;  // Add a newline after the sequence

  return 0;
}
