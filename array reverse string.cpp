#include <string.h>
#include <iostream>
using namespace std;

int main() {

    char str[10] = "level", rev[10];
    int i, j, count = 0;

    cout << "String Before Reverse: " << str;
    // finding the length of the string
    while (str[count] != '\0') {
        count++;
    }
    j = count - 1;
    // Storing the array to another array
    for (i = 0; i <= count; i++) {
        rev[i] = str[j];
        j--;
    }
    cout << "String After Reverse: " << rev;
    return 0;
}
