/***********************
  ���� : ptrincrement.c 
 ***********************/

#include <stdio.h>

int main(void) 
{
	int i = 0, aryLength;
	int sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0, sum5 = 0;
	int point[] = {95, 88, 76, 54, 85, 33, 65, 78, 99, 82};
	int *pi = point, *pj = point;
	aryLength = sizeof (point) / sizeof (int); 

	printf("�迭 point[i]�� �̿��Ͽ� ���Ұ��� ��� \n");
	for (i = 0; i < aryLength; i++) 
	{
		printf("%d%s", point[i], i == aryLength - 1 ? "\n\n" : ", ");
		sum1 += point[i];
		sum2 += *(point + i);
		sum3 += pi[i]; //*(pi + i)�� ���� �ǹ�
		sum4 += *(pi + i);
		sum5 += *pj++;
	}
	printf("���� ������� ���� ���� ���� %d, %d, %d, %d, %d\n", sum1, sum2, sum3, sum4, sum5);

	return 0;
}
/*** End of ptrincrement.c ***/ 

