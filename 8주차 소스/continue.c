/************************* 파일 : continue.c *************************/ 

#include <stdio.h> 
#define LIMIT 10

int main(void)
{
    int i = 1, sum = 0, miss;

    printf("1과 %d사이의 한 정수를 입력하세요. >> ", LIMIT);
	scanf("%d", &miss);
	
    for ( ; i <= LIMIT; i++)
	{
        if (i == miss) continue;
		sum += i;
	    printf("1에서 %d까지의 모든 정수의 합은 %d입니다.\n", i, sum);
    }

    printf("\n1과 %d사이에서 %d를 제외한 모든 정수의 합은 %d입니다.\n",
		   LIMIT, miss, sum);

	return 0;
}
/*>>>>>>>>>>>>>>>>>>>>>>>>  프로그램 종료  <<<<<<<<<<<<<<<<<<<<<<<<<<*/

