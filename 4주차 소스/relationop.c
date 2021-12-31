/* =================================================================== */
/*                     file name : relationop.c                        */
//  C4996 에러 발생시
//  scanf 대신에 scanf_s를 사용하거나
//  SDL 체크를 제거 합니다. 
//  (가상강좌의 첨부파일인 scanf 사용시 에러 해결.ppt 를 참조바람)

#include <stdio.h>

int main(void) 
{ 
    int m, n;
    char x, y;
    
	// 정사각형의 길이를 입력받는 모듈
    printf("두 문자를 입력하세요. ");
    scanf("%c%c", &x, &y);
    printf("두 정수를 입력하세요. ");
    scanf("%d%d", &m, &n);


    printf("\n입력한 두 문자 %c(%d), %c(%d)를 비교하면 \n", x, x, y, y);
	printf("\t(%c > %c)의 관계연산 결과는 %d입니다.\n", x, y, x > y);
    printf("입력한 두 정수 %d, %d를 비교하면 \n", m, n);
	printf("\t(%d > %d)의 관계연산 결과는 %d입니다.\n", m, n, m > n);

    return 0;
}

