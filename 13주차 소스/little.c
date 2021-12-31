/******************
  파일 : little.c 
 ******************/ 

#include <stdio.h> 

int main(void) 
{
	int  num = 100;
	char *c = (char *)&num;

	printf("int    변수(num) 값 %x이다.\n", num);
	printf("%d\n", *c);
	printf("%d\n", *(c+1));
	printf("%d\n", *(c+2));
	printf("%d\n", *(c+3));

	return 0;
}
/*** End of little.c ***/ 