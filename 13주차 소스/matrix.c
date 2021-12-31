/*****************
  ���� : matrix.c 
 *****************/ 

#include <stdio.h>

#define ROWS 2
#define COLS 3

typedef int matrixA[ROWS][COLS];
typedef int matrixB[COLS][ROWS];
typedef int resultC[ROWS][ROWS];

void multiply(resultC r, matrixA a, matrixB b);
void display(resultC r, int M);

/******** �� ����� ���ϴ� main() �Լ� ********/
int main(void)
{
    matrixA a = {{1, 2, 2}, {2, 3, 1}};
    matrixB b = {{1, 2}, {1, 3}, {1, 2}};
    resultC r = {0};

	int i, j;

	printf("���� �� ����� �����Դϴ�.\n");
	for (i=0; i < ROWS; i++) {
		for (j=0; j < COLS; j++) {
			printf("%4d", a[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	display(b, COLS);
	printf("�� �� ����� ���� �����Դϴ�.\n");
	multiply(r, a, b);
	display(r, ROWS);

    return 0;
}

/****** ������ �� ����� ���Ͽ� �� ����� r�� �����ϴ� �Լ� ******/
void multiply(resultC r, matrixA a, matrixB b) {
	int i, j, k;
	for (i=0; i < ROWS; i++) {
		for (j=0; j < ROWS; j++) {
			for (k=0; k < COLS; k++) {
				//r[i][j] += a[i][k] * b[k][j];
				*(r[i] + j) += *(a[i]+ k) * *(b[k] + j);
			}
		}
	}
}

/****** ������ ����� ����ϴ� �Լ� ******/
void display(resultC r, int M) {
	int i, j;
	for (i=0; i < M; i++) {
		for (j=0; j < ROWS; j++) {
			printf("%4d", r[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}
/*** End of matrix.c ***/ 



