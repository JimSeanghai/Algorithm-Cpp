#include <iostream>
using namespace std;

int sumRow(const int m[][3], int row){
    int sumR = 0;
    for (int Col = 0 ; Col<3 ; Col++){
        sumR += m[row][Col];
    }
    return sumR;
}

int sumCol (const int m[][3], int col){
    int sumC = 0;
    for(int Row = 0; Row <3; Row ++){
        sumC += m[Row][col];
    }
    return sumC;
}

int main(){
    int matrix [3][3];
    cout << "Input matrix elements here: " <<endl;
    for( int i =0 ; i<3;i++){
        for( int j=0 ; j<3 ;j++){
            cin >> matrix[i][j];
        }
    }

    for(int i=0 ; i<3 ;i++){
        cout << "Sum of row " << i << " = " << sumRow(matrix , i) << endl;
    }

    for(int i=0 ; i<3 ;i++){
        cout << "Sum of col " << i << " = " << sumCol(matrix , i) << endl;
    }

    return 0;
}
