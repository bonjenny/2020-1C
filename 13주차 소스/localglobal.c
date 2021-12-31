/************************************************************/
/* 파일 : localglobal.c */ 
/************************************************************/

#include <stdio.h> 

int gVar = 100;		//전역변수

///////////////////////////////////////////////////////
int main(void)  
{
    int count = 10;  //지역변수

    count += gVar;	
	printf("함수 main() :\n");
	printf("count = %5d, gVar = %5d\n\n", count, gVar);

	{
		int count = 100; //지역변수
		count += gVar++; 
		printf("\t함수 main() 내부의 블록 :\n");
		printf("\tcount = %5d, gVar = %5d\n\n", count, gVar);
	}

	printf("함수 main() :\n");
	printf("count = %5d, gVar = %5d\n", count, gVar);

	return 0;
}
/************************************************************/
