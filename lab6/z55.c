#include <stdio.h>


void matr1(int stroka, int stolb, int matrix[stroka][stolb]) {
    for (int i = 0; i < stroka; i++) {
        for (int j = 0; j < stolb; j++) {   
            scanf("%d", &matrix[i][j]);
        }
    }
        for (int i = 0; i < stroka; i++) {
            for (int j = 0; j < stolb; j++) {
                printf("%d ", matrix[i][j]);
            }
        printf("\n");
    }
}

void matr2(int stolb, int matrix[stolb]) {
    for (int i = 0; i < stolb; i++) {
        scanf("%d", &matrix[i]);
    }
    for (int i = 0; i < stolb; i++) {
        printf("%d\n", matrix[i]);
    }
}

int opredelitel(int stk, int matrix[stk][stk]) {
    if (stk == 1) return matrix[0][0];
    if (stk == 2) return matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0];
    int det = 0;
    int minor[stk - 1][stk - 1];
    for (int k = 0; k < stk; k++) {
        for (int i = 1; i < stk; i++) {
            int jj = 0;
            for (int j = 0; j < stk; j++) {
                if (j == k) continue;
                minor[i - 1][jj] = matrix[i][j];
                jj++;
            }
        }
        int sign = (k % 2 == 0) ? 1 : -1;
        det += sign * matrix[0][k] * opredelitel(stk - 1, minor);
    }
    return det;
}

void kramer(int stroka, int stolb, int matrA[stroka][stolb], int matrB[stroka]) {
    if (stroka != stolb) {
        printf("Метод Крамера применим только к квадратной матрице\n");
        return;
    }
    int detA = opredelitel(stroka, matrA);
    if (detA == 0) {
        printf("Определитель матрицы A = 0, метод Крамера не применим\n");
        return;
    }
    int Acop[stroka][stroka];
    double x[stroka];
    for (int k = 0; k < stroka; k++) {
        for (int i = 0; i < stroka; i++)
            for (int j = 0; j < stroka; j++)
                Acop[i][j] = matrA[i][j];
        for (int i = 0; i < stroka; i++)
            Acop[i][k] = matrB[i];
        x[k] = (double)opredelitel(stroka, Acop) / detA;
    }
    printf("Определитель матрицы A = %d\n", detA);
    printf("Решение методом Крамера:\n");
    for (int k = 0; k < stroka; k++)
        printf("x%d = %.2f\n", k + 1, x[k]);
}

int main() {
    int stroka;
    int stolb;
    printf("Введите кол-во строк и столбцов для матрицы A через пробел:\n");
    scanf("%d %d/n", &stroka, &stolb);
    printf("Введите %d x %d элементов матрицы A:\n", stroka, stolb);
    int matrA[stroka][stolb];
    matr1(stolb, stroka, matrA);
    printf("Введите элементы матрицы B, %d чисел:\n", stroka);
    int matrB[stolb];
    matr2(stolb, matrB);
    printf("Введите элементы матрицы X, %d чисел:\n", stolb);
    int matrX[stolb];
    matr2(stolb, matrX);
    kramer(stroka, stolb, matrA, matrB);
}