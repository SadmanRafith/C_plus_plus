#include <iostream>
using namespace std;

int main() {
    // Initialize the sum to 0
    int sum = 0;

    // Initialize the loop variable to 1
    int i = 1;

    // Get the value of n from the user
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    // Keep looping as long as i is less than or equal to n
    while (i <= n) {
        // Add i^2 to the sum
        sum += i * i;
        // Increment i by 2
        i += 2;
    }

    // Print the sum
    cout << "The sum is: " << sum << "\n";

    return 0;
}
