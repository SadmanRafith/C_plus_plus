#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int x, a, sum = 0, inc = 1;

    cout << "Md. Tahsin Hasib" << endl;
    cout << "22-46026-1" << '\n';
    cout << "\n\n";

    cout << "Input the value of x: ";
    cin >> x;
    cout << "Input number of terms: ";
    cin >> a;

    cout << "\nThe values of series: \n";

    for (int i = 0; i < a; i++)
    {
        int posNum = pow(x, inc);

        if (i % 2 == 0)
        {
            sum += posNum;
            cout << posNum << endl;
        }
        else
        {
            sum -= posNum;
            cout << '-' << posNum << endl;
        }

        inc = inc + 2;
    }

    cout << "The sum = " << sum << endl;

    return 0;
}
