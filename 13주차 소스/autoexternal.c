/*************************************************************************/
/* 파일 : autoexternal.c */ 
/*************************************************************************/

#include <stdio.h> //printf() 의 이용을 위한 헤더 파일 포함

void increment(int);

int gIndex = 11;
int count = 51;

//////////////////////////////////////////////////////////////////////
int main(void)  
{
    extern int gIndex;    //외부 전역변수

    auto int index = 15;  //자동 지역변수
    int count = 55;       //자동 지역변수

	printf("메인 함수에서 increment() 함수 호출 전\n");
	printf(" (전역)gIndex = %2d, (지역)index = %2d, (지역)count = %2d\n\n", 
		    gIndex, index, count);

    increment(index); 

	printf("메인 함수에서 increment() 함수 호출 후\n");
	printf(" (전역)gIndex = %2d, (지역)index = %2d, (지역)count = %2d\n\n", 
		    gIndex, index, count);

	return 0;
}

//////////////////////////////////////////////////////////////////////
void increment(int i)
{
	i++;
	gIndex++;
	count++;
	printf("\tincrement() 함수 내에서\n");
	printf("\t\t (전역)gIndex = %2d, (지역)i = %2d, (전역)count = %2d\n\n", 
		    gIndex, i, count);
}
/*************************************************************************/
