#include <iostream>
#include <vector>
using namespace std;

vector<string> filterStrings(string arr[][3], int rows, int cols) {
    vector<string> result;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j].length() <= 4) {
                result.push_back(arr[i][j]);
            }
        }
    }
    return result;
}

int main() {
    string arr[][3] = {
        {"abc", "def", "ghi"},
        {"jkl", "mno", "pqr"},
        {"stu", "vwx", "yz"}
    };
    int rows = 3;
    int cols = 3;

    vector<string> result = filterStrings(arr, rows, cols);

    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    return 0;
}
