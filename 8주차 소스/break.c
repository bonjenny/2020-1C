/******************** 파일 : break.c *********************/ 

#include <stdio.h> 
#define TERMINAL 10

int main(void)
{
    int num;

    printf("정수를 하나 입력하고 엔터키를 누르세요.\n");
    printf("정수 10을 입력하면 프로그램이 종료됩니다.\n");

    for ( ; ; ) 
	{
		scanf("%d", &num);
        if (num == TERMINAL) break;
    }
    printf("무한 루프를 종료합니다.\n");

	return 0;
}
/*>>>>>>>>>>>>>>>>>>  main() 함수 종료  <<<<<<<<<<<<<<<<<*/

