/***********************************************************************/
/* 파일 : externalstatic.c */ 
/***********************************************************************/

#include <stdio.h> 

int sum(int);
static int cntFunction = 0; 

//////////////////////////////////////////////////////////////////
int main(void) 
{
	int count = 1;
    //extern int cntFunction; 

	for ( ; count <= 5; count++ )
		printf("1부터 %3d까지의 합은 %5d이다.\n", count, sum(count));
	
	printf("합을 구하는 함수가 총 %2d번 호출되었습니다.\n", cntFunction);
}

/////////////////////////////////////////////////////////////////
int sum(int limit) 
{
	auto int i = 1, total = 0;

	cntFunction++;
	for ( i = 1; i <= limit; i++ )
		total += i;

	return total;
}
/***********************************************************************/
