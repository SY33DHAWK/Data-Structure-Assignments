#include <iostream>
using namespace std;

void addArrays(int arr1[][3], int arr2[][3], int rows, int cols, int result[][3]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
}

int main() {
    int arr1[][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int arr2[][3] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };
    int rows = 3;
    int cols = 3;
    int result[row][col];

    addArrays(arr1, arr2, rows, cols, result);

    cout << "Result:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
