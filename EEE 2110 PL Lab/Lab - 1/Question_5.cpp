#include <iostream>
using namespace std;

int main() {
    // Get the upper limit from the user
    int limit;
    cout << "Enter the upper limit: ";
    cin >> limit;

    // Initialize the sum to 0
    int sum = 0;

    // Initialize the loop variable to 2
    int i = 2;

    // Use a do-while loop to sum the even numbers
    do {
        // Add the current value of i to the sum
        sum += i;

        // Increment i by 2 to move to the next even number
        i += 2;
    } while (i <= limit);  // Continue looping as long as i is less than or equal to the upper limit

    // Print the result
    cout << "The sum of the even numbers from 2 to " << limit << " is: " << sum << endl;

    return 0;
}
