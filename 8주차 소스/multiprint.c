/**************** 파일 : multiprint.c **************/ 

#include <stdio.h> 

int main(void)
{
    int i = 0;

	//5개의 printf() 문장
	printf("*****\n");
	printf("*****\n");
	printf("*****\n");
	printf("*****\n");
	printf("*****\n\n");

	//1개의 printf() 문장
	printf("*****\n*****\n*****\n*****\n*****\n\n");

	//for문을 이용
	for (i = 0; i < 5; i++)
	{
		printf("*****\n");
	}

	return 0;
}
/*>>>>>>>>>>>>>>>  프로그램 종료  <<<<<<<<<<<<<<<<<*/

