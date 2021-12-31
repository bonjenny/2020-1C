/******************* 파일 : sumlimit.c *********************/ 

#include <stdio.h> 
#define LIMIT 10

int main(void)
{
	int sum = 0, i = 0;

	sum = 1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 + 10;
	printf("1에서 %d까지의 합은 %d 입니다.\n", LIMIT, sum);

	sum = 0;
    for (i = 1; i <= LIMIT; i++) 
	{
		sum += i;
	}
	printf("1에서 %d까지의 합은 %d 입니다.\n", LIMIT, sum);

	return 0;
}
/*>>>>>>>>>>>>>>>>>>  프로그램 종료  <<<<<<<<<<<<<<<<<<<<<<*/

