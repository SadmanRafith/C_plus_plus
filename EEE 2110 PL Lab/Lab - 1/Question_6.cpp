#include <iostream>
using namespace std;


int main() {
    // Initialize the sum to 0
    int sum = 0;
    cout << "Enter numbers: " << endl;

    // Use a for loop to read numbers from the user and add them to the sum
    for (int n; cin >> n;) {  // Read a number from the user and check if it's not EOF
        if (n < 0) {  // If the number is negative, break out of the loop
            break;
        }
        sum += n;  // Add the number to the sum
    }

    // Print the result
    cout << "The sum is: " << sum << endl;

  return 0;
}
