/***********************
  파일 : ptrary.c 
 ***********************/

#include <stdio.h>

int main(void) 
{
	int i = 0;
	int a = 50, b = 30, c = 40;
    int *pAry[3];

	printf("변수 a : 주소값 [%p], 내용값 %d\n", &a, a);
	printf("변수 b : 주소값 [%p], 내용값 %d\n", &b, b);
	printf("변수 c : 주소값 [%p], 내용값 %d\n\n", &c, c);

    pAry[0] = &a; 
    pAry[1] = &c; 
    pAry[2] = &b; 

	printf("문장 pAry[0] = &a; pAry[1] = &c; pAry[2] = &b; 이후에 \n\n");
	for (i = 0; i < 3; i++) 
	{
		printf("포인터 배열원소 변수 pAry[%d] : 내용값 [%p], *pAry[%d] = %d\n", 
			    i, pAry[i], i, *pAry[i]);
	}

	return 0;
}
/*** End of ptrary.c ***/ 
