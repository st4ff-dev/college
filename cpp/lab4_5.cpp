#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    int arr[m][n], num = 0;
    int left = 0, right = n - 1, top = 0, bottom = m - 1;

    while (left <= right && top <= bottom) {
        for (int i = left; i <= right; i++) arr[top][i] = num++;
        top++;

        for (int i = top; i <= bottom; i++) arr[i][right] = num++;
        right--;

        if (top <= bottom) {
            for (int i = right; i >= left; i--) arr[bottom][i] = num++;
            bottom--;
        }

        if (left <= right) {
            for (int i = bottom; i >= top; i--) arr[i][left] = num++;
            left++;
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << setw(3) << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}