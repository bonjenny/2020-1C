/****
 getsputs.c : 함수 gets()와 puts()를 이용하여 문자열의 입출력 처리 
 ****/ 

#include <stdio.h> 

int main(void) 
{
	char line[81];
	char name[20];

	printf("> 너의 좌우명은?\n");
	gets(line);	
	printf("> 너의 이름은? ");
	scanf("%s", name);

	printf("\n\t너의 이름은 %s이고, 좌우명은\n\t", name);
	puts(line);	

	return 0;
}
/************************* 프로그램 종료 *************************/
