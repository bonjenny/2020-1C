/****
 getsputs.c : �Լ� gets()�� puts()�� �̿��Ͽ� ���ڿ��� ����� ó�� 
 ****/ 

#include <stdio.h> 

int main(void) 
{
	char line[81];
	char name[20];

	printf("> ���� �¿����?\n");
	gets(line);	
	printf("> ���� �̸���? ");
	scanf("%s", name);

	printf("\n\t���� �̸��� %s�̰�, �¿����\n\t", name);
	puts(line);	

	return 0;
}
/************************* ���α׷� ���� *************************/
