/*******************************************************/
/* 파일 : static.c */ 
/*******************************************************/

#include <stdio.h> 
void increment(void); //함수 원형

///////////////////////////////////////////////////////
int main(void) 
{
	int count = 0;		//자동 지역변수
	for ( ;count < 5; count++ ) 
	{
		printf("함수 increment() 호출 : \n");
		increment();	//5번 함수 호출 
	}
}

///////////////////////////////////////////////////////
void increment(void) 
{
	static int sindex = 1;	//정적 지역변수
	auto int aindex = 1;	//자동 지역변수
	printf("\t정적 지역변수 sindex=%2d,\t", sindex++);
	printf("자동 지역변수 aindex=%2d\n", aindex++);
}
/*******************************************************/
