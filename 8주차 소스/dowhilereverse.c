/************** 파일 : dowhilereverse.c *************/ 

#include <stdio.h> 

int main(void)  
{
    int value;		//입력한 정수 값
	int r_digit;	//출력할 마지막 자릿수

    printf("반대로 출력할 정수를 입력하세요.\n");
    scanf("%d", &value);
    printf("\n입력한 수를 반대로 출력하면 >>> ");

    do
	{
        r_digit = value % 10;
        printf("%d", r_digit);
        value = value / 10;
    } while( value /* value != 0 */ );
    printf("\n");

    return 0;
}
/*>>>>>>>>>>>>>>>>  프로그램 종료  <<<<<<<<<<<<<<<<<*/
