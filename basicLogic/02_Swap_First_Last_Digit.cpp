#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num = 12345;
    int first, last, digits = 0, temp;

    last = num % 10;

    temp = num;
    while(temp >= 10) {
        temp /= 10;
        digits++;
    }

    first = temp;
    int power = pow(10, digits);

    int swapped = last * power + (num % power) - last + first;

    cout << "Number after swapping = " << swapped;

    return 0;
}