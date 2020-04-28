// MatrixMultiply.cpp 

#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;
const int n = 3;

void show(int M[n][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%4d", M[i][j]);
        }
    }
    cout << endl;
}

int main()
{
    system("chcp 1251 > nul");
    
    int A[n][n] = { {1,-2,1},{2,0,-1},{2,3,-1} };
    printf("Matrix A:\n");
    show(A);
    
    int B[n][n] = { {2,1,-1},{1,3,1},{-2,1,4} };
    printf("Matrix B:\n");
    show(B);

    int C[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            C[i][j] = 0;
            for (int k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("Matrix C = A*B: \n");
    show(C);

    system("pause > nul");
    return 0;
}
