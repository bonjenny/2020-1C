/*****************
  파일 : matrix.c 
 *****************/ 

#include <stdio.h>

#define ROWS 2
#define COLS 3

typedef int matrixA[ROWS][COLS];
typedef int matrixB[COLS][ROWS];
typedef int resultC[ROWS][ROWS];

void multiply(resultC r, matrixA a, matrixB b);
void display(resultC r, int M);

/******** 두 행렬을 곱하는 main() 함수 ********/
int main(void)
{
    matrixA a = {{1, 2, 2}, {2, 3, 1}};
    matrixB b = {{1, 2}, {1, 3}, {1, 2}};
    resultC r = {0};

	int i, j;

	printf("곱할 두 행렬은 다음입니다.\n");
	for (i=0; i < ROWS; i++) {
		for (j=0; j < COLS; j++) {
			printf("%4d", a[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	display(b, COLS);
	printf("위 두 행렬의 곱은 다음입니다.\n");
	multiply(r, a, b);
	display(r, ROWS);

    return 0;
}

/****** 인자인 두 행렬을 곱하여 그 결과를 r에 저장하는 함수 ******/
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

/****** 인자인 행렬을 출력하는 함수 ******/
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



