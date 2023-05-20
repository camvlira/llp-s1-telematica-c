#include <stdio.h>
void matrixSum(int n, int A[][n], int B[][n], int C[][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }}}
int main() {
    int n = 3;
    int A[3][3] = {{1, 5, 3}, {2, 5, 1}, {7, 1, 3}};
    int B[3][3] = {{1, 3, 3}, {1, 6, 3}, {3, 4, 1}};
    int C[3][3];

    matrixSum(n, A, B, C);
    printf("Soma da matrizes:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%i ", C[i][j]);
        }printf("\n");}
    return 0;
}
