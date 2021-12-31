/********************
  파일 : doubleptr.c 
 ********************/ 

#include <stdio.h> 

int main(void) 
{
	int i = 10;
	int *pi = &i; 
	int **dpi = &pi;
    
	printf("변수 i  의 주소는 [%p]이며, 저장값은 %d\n", &i, i);
	printf("변수 pi 의 주소는 [%p]이며, 저장값은 %#x\n", &pi, pi);
	printf("변수 dpi의 주소는 [%p]이며, 저장값은 %#X\n\n", &dpi, dpi);

	*pi = i + 2;
	printf("문장 *pi = i + 2; 이후\n"); 
	printf("변수 i  의 주소는 [%p]이며, 저장값은 %d\n", &i, i);
	printf("변수 pi 의 주소는 [%p]이며, 저장값은 %#x\n\n", &pi, pi);

	**dpi = *pi + 2;
	printf("문장 **dpi = *pi + 2; 이후\n"); 
	printf("변수 i  의 주소는 [%p]이며, 저장값은 %d\n", &i, i);
	printf("변수 pi 의 주소는 [%p]이며, 저장값은 %#x\n", &pi, pi);
	printf("변수 dpi의 주소는 [%p]이며, 저장값은 %#X\n", &dpi, dpi);

	return 0;
}
/*** End of doubleptr.c ***/ 

