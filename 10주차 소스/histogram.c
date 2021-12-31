/*****
 파일 : histogram.c 
 *****/

#include <stdio.h>

int printHistogram(int a); 
void printHeading(void);

int main(void) 
{
	int a = 74, b = 42, c = 99;

	printHeading();
	printf("%5s(%2d) : ", "임걱정", a);
	printf("(%2d)\n", printHistogram(a));
	printf("%5s(%2d) : ", "홍길동", b);
	printf("(%2d)\n", printHistogram(b));
	printf("%5s(%2d) : ", "장길산", c);
	printf("(%2d)\n", printHistogram(c));
	putchar('\n');

	return 0;
}

void printHeading(void)
{
    printf(" ----- 개인별 점수 막대그래프 ------\n\n");
}

int printHistogram(int a) 
{ 
	int i = 0;
	int limit = a / 10;
	for(; i < limit; i++)
		putchar('*');
	return limit;
}


