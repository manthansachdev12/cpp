//Write a program to find the maximum and minimum elements in a three-dimensional array 
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
    int maxElement, minElement;

    cout << "Enter elements of the 3D array:" << endl;
    for(int i = 0; i < layers; i++) {
        for(int j = 0; j < rows; j++) {
            for(int k = 0; k < cols; k++) {
                cin >> arr[i][j][k];
            }
        }
    }

    // Initialize max and min with the first element
    maxElement = arr[0][0][0];
    minElement = arr[0][0][0];

    // Find maximum and minimum elements
    for(int i = 0; i < layers; i++) {
        for(int j = 0; j < rows; j++) {
            for(int k = 0; k < cols; k++) {
                if(arr[i][j][k] > maxElement) {
                    maxElement = arr[i][j][k];
                }
                if(arr[i][j][k] < minElement) {
                    minElement = arr[i][j][k];
                }
            }
        }
    }

    cout << "Maximum element in the 3D array = " << maxElement << endl;
    cout << "Minimum element in the 3D array = " << minElement << endl;

    return 0;
}