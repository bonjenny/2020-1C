/***********************
  ���� : ptrary.c 
 ***********************/

#include <stdio.h>

int main(void) 
{
	int i = 0;
	int a = 50, b = 30, c = 40;
    int *pAry[3];

	printf("���� a : �ּҰ� [%p], ���밪 %d\n", &a, a);
	printf("���� b : �ּҰ� [%p], ���밪 %d\n", &b, b);
	printf("���� c : �ּҰ� [%p], ���밪 %d\n\n", &c, c);

    pAry[0] = &a; 
    pAry[1] = &c; 
    pAry[2] = &b; 

	printf("���� pAry[0] = &a; pAry[1] = &c; pAry[2] = &b; ���Ŀ� \n\n");
	for (i = 0; i < 3; i++) 
	{
		printf("������ �迭���� ���� pAry[%d] : ���밪 [%p], *pAry[%d] = %d\n", 
			    i, pAry[i], i, *pAry[i]);
	}

	return 0;
}
/*** End of ptrary.c ***/ 
