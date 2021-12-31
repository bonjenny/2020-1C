/*****
 ���� : histogram.c 
 *****/

#include <stdio.h>

int printHistogram(int a); 
void printHeading(void);

int main(void) 
{
	int a = 74, b = 42, c = 99;

	printHeading();
	printf("%5s(%2d) : ", "�Ӱ���", a);
	printf("(%2d)\n", printHistogram(a));
	printf("%5s(%2d) : ", "ȫ�浿", b);
	printf("(%2d)\n", printHistogram(b));
	printf("%5s(%2d) : ", "����", c);
	printf("(%2d)\n", printHistogram(c));
	putchar('\n');

	return 0;
}

void printHeading(void)
{
    printf(" ----- ���κ� ���� ����׷��� ------\n\n");
}

int printHistogram(int a) 
{ 
	int i = 0;
	int limit = a / 10;
	for(; i < limit; i++)
		putchar('*');
	return limit;
}


