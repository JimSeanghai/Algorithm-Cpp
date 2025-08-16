#include <iostream>
using namespace std;

void multiplyAndDisplay(int A[2][3], int B[3][2]) {
    int C[2][2];

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            C[i][j] = 0;
            for (int k = 0; k < 3; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    cout << "\nResult Matrix (2x2):\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++)
            cout << C[i][j] << "\t";
        cout << endl;
    }
}

int main() {
    int A[2][3], B[3][2];

    cout << "Enter elements of Matrix A (2x3):\n";
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 3; j++)
            cin >> A[i][j];

    cout << "Enter elements of Matrix B (3x2):\n";
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 2; j++)
            cin >> B[i][j];

    multiplyAndDisplay(A, B);

    return 0;
}
