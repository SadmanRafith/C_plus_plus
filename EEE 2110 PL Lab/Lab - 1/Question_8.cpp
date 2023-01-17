#include <iostream>
using namespace std;

int main() {
    // Get the value of n from the user
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    // Initialize the sum to 0
    int sum = 0;

    // Use a for loop to calculate the sum
    for (int i = 1; i <= n; i += 2) {  // Increment i by 2 on each iteration to skip the even numbers
        if (i % 4 == 1) {  // If i is 1 or -1 mod 4, add i^2 to the sum
        sum += i * i;
        } else {  // Otherwise, subtract i^2 from the sum
        sum -= i * i;
        }
    }

    // Print the result
    cout << "The sum is: " << sum << endl;

    return 0;
}
