//Write a program to input a 3D array and calculate the sum of all elements across all layers.
#include <iostream>
using namespace std;

int main() {
    int layers, rows, cols;
    cout << "Enter the number of layers: ";
    cin >> layers;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    int arr[layers][rows][cols];
    int sum = 0;

    cout << "Enter elements of the 3D array:" << endl;
    for(int i = 0; i < layers; i++) {
        for(int j = 0; j < rows; j++) {
            for(int k = 0; k < cols; k++) {
                cin >> arr[i][j][k];
                sum += arr[i][j][k];
            }
        }
    }
    cout << "Sum of all elements in the 3D array = " << sum;
    
    return 0;
}