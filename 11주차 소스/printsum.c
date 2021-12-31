/*****
 파일 : printsum.c 
 *****/

#include <stdio.h> 

//함수 원형
int sum(int a, int b);
void printKorea(void);

int main(void) 
{
	int a=3, b=4;

	printKorea();
	printf("%3d + %3d = %4d\n", a, b, sum(a, b));

	return 0;
}

/****************** 다른 함수의 정의 ******************/
int sum(int a, int b) 
{ 
	return (a + b);
}

void printKorea(void)
{
    printf("2010년 월드컵! 대~한 민국 짜자~짜자짜 \n");
}