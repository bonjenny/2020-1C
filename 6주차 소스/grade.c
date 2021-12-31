/*=================== 파일 : grade.c =====================*/ 

#include <stdio.h> 

int main(void)
{
	int point = 0;

	printf("프로그래밍 언어 점수를 입력하세요. --> ");
	scanf("%d", &point);

	if ( point >= 90 ) 
	{
		printf("프로그래밍 언어 학점이 A입니다.\n");
	} 
	else if ( point >= 80 ) // point >= 80 && point < 90  
	{
		printf("프로그래밍 언어 학점이 B입니다.\n");
	} 
	else if ( point >= 70 ) // point >= 70 && point < 80
	{
		printf("프로그래밍 언어 학점이 C입니다.\n");
	} 
	else if ( point >= 60 ) // point >= 60 && point < 70
	{
		printf("프로그래밍 언어 학점이 D입니다.\n");
	} 
	else // point < 60
	{
		printf("프로그래밍 언어 학점이 F입니다.\n");
	}

	return 0;
}
/*>>>>>>>>>>>>>>>>>>  End of grade.c  <<<<<<<<<<<<<<<<<<<<*/

