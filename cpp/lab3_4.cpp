#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    
    int arr[m][n];
    int num = 0;
    
    for (int i = 0; i < m; i++) {
        if (i % 2 == 0) {  // слева направо
            for (int j = 0; j < n; j++)
                arr[i][j] = num++;
        } else {  // справа налево
            for (int j = n - 1; j >= 0; j--)
                arr[i][j] = num++;
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << setw(2) << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}