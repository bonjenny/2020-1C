/****
 string.c : char �� �迭�� �̿��� ���ڿ� ó��  
 ****/ 

#include <stdio.h> 

int main(void) 
{
    int i = 0, j = 0;

	// ���ڿ� ó��
	char lang[] = "C Language!";
	char abc[] = {'A', 'B', 'C', '\0'};
	char java[5] = "java";

	printf(lang);
	printf("\n");
	printf(abc);
	printf("\n");

	printf("%s %s\n", lang, abc);

	//����� �迭 ���� ���
	for (i=0; java[i]; i++) 
	{
		printf("%c", java[i]);
	}
	printf("\n\n");

	printf("char lang[] = \"C Language!\"; ����\n");
	printf("lang[6] = '\\0'; �� ������ ��\n");
	printf("���ڿ� lang�� ����ϸ� >> ");
	
	lang[6] = '\0';
	printf("%s\n", lang);

	return 0;
}
/********************* ���α׷� ����  *********************/