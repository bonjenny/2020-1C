//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
// file : shortassign1.c                                      //
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//

#include <stdio.h>

int main(void) 
{ 
    int m, n, x, y;

    printf("축약 대입 연산을 수행할 정수 1을 입력하세요 : ");
    scanf("%d", &m); 
    printf("축약 대입 연산을 수행할 정수 2를 입력하세요 : ");
    scanf("%d", &n); 

	x = m; y = n;
    printf("\n연산 x += y 결과는 %d입니다.\n", x += y); 
	x = m; y = n;
    printf("연산 x -= y 결과는 %d입니다.\n", x -= y);
	x = m; y = n;
    printf("연산 x *= y 결과는 %d입니다.\n", x *= y);
	x = m; y = n;
    printf("연산 x /= y 결과는 %d입니다.\n", x /= y);
	x = m; y = n;
    printf("연산 x %%= y 결과는 %d입니다.\n", x %= y); 
	x = m; y = n;
  
    return 0;
}


