/*================ 파일 : ifgrade.c =====================*/ 

#include <stdio.h> //printf() 의 이용을 위한 헤더 파일 포함

int main(void) 
{
	double grade = 0;

	printf("이번 학기의 성적(평균 평점)은 얼마인가? ");	
	scanf("%lf", &grade);	
	printf("---> 입력한 당신 성적은 %lf 입니다.\n", grade);	

	if (grade >= 4.3)
	{
		printf(">>>> 장학금을 받습니다.\n");	
		printf(">>>> 해외연수도 무료로 지원됩니다.\n");	
	}
	printf(">>>> 수업료를 납부합니다.\n");	

	return 0;
}
/*>>>>>>>>>>>>>>>>>  End of ifgrade.c <<<<<<<<<<<<<<<<<<<<*/
