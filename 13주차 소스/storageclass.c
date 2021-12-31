/********************************************************/
/* 파일 : storageclass.c */ 
/********************************************************/

#include <stdio.h> 
#include <stdlib.h> /* 함수 malloc()을 위한 헤더파일 */

void function( void );

int gx = 1;      /* 전역 변수 */
int gy = 5;      /* 전역 변수 */

//////////////////////////////////////////////////////
int main(void)
{
	int mainx = 50;   /* 메인 함수의 지역 변수 */

	/* 동적할당 변수는 17장에서 학습할 예정*/
	int *ip = (int *) malloc( sizeof(int) );
	*ip = 10;

	printf("데이터 영역(data area) : 전역변수\n");
	printf("\t\t\tgx(%d) : \t%p\n", gx, &gx);
	printf("\t\t\tgy(%d) : \t%p\n\n", gy, &gy);

	printf("스택 영역(stack area) : 지역변수\n");
	printf("\t\t\tmainx(%d) : \t%p\n", mainx, &mainx);
	function();

	printf("힙 영역(heap area) : 동작할당변수\n");
	printf("\t\t\tip(%d) : \t%p\n\n", *ip, ip);

	return 0;
}

/////////////////////////////////////////////////////
void function( void )
{
	auto int fa = 25;  
	static int fs;  

	printf("\t\t\tfa(%d) : \t%p\n\n", fa, &fa);
	printf("데이터 영역(data area) : 정적변수\n");
	printf("\t\t\tfs(%d) : \t%p\n\n", fs, &fs);
}
/********************************************************/

