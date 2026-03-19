#include <iostream>
using namespace std;

int main() {
    int arr[5] = {12, 4, 7, 1, 9};
    int min = arr[0];

    for(int i = 1; i < 5; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
    }

    cout << "Smallest element = " << min;

    return 0;
}