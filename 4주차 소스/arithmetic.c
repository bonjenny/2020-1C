/*                file name : arithmetic.c                      */
//  C4996 에러 발생시
//  scanf 대신에 scanf_s를 사용하거나
//  SDL 체크를 제거 합니다. 
//  (가상강좌의 첨부파일인 scanf 사용시 에러 해결.ppt 를 참조바람)

#include <stdio.h>

int main(void) 
{ 
    int x, y;
    int addition, subtraction, multiplication, division, modulus;

    printf("정수 1을 입력하세요 : ");
    scanf("%d", &x);
    printf("정수 2를 입력하세요 : ");
    scanf("%d", &y);

	//사칙연산과 나머지 연산을 구해 봅시다.
    addition = x + y;
    subtraction = x - y;
    multiplication = x * y;
    division = x / y;
    modulus = x % y;

	//사칙연산과 나머지 연산을 출력합시다.
	
    printf("%d + %d는 %d입니다.\n", x, y, addition);
    printf("%d - %d는 %d입니다.\n", x, y, subtraction);
    printf("%d * %d는 %d입니다.\n", x, y, multiplication);
    printf("%d / %d는 %d입니다.\n", x, y, division);
    printf("%d %% %d는 %d입니다.\n", x, y, modulus);
    
    return 0;
}
/* ============================================================ */
