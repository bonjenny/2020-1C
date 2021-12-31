/***********************
  ���� : aryfunction.c 
 ***********************/

#include <stdio.h>

int sumaryf1(int ary[], int SIZE);
int sumaryf2(int *ary,  int SIZE);

int main(void) 
{
	int i = 0, sum = 0, aryLength;
	int point[] = {95, 88, 76, 54, 85, 33, 65, 78, 99, 82};
	aryLength = sizeof (point) / sizeof (int); 

	printf("�迭 point[i]�� �̿��Ͽ� ���� ���� ��� \n");
	for (i = 0; i < aryLength; i++) {
		sum += point[i];
		printf("%d%s", point[i], i == aryLength - 1 ? "\n" : ", ");
	}
	printf("���ο��� ���� ���� %d\n\n", sum);

	printf("�Լ� sumaryf1() ȣ��� ���� ���� %d\n", sumaryf1(point, aryLength));
	printf("�Լ� sumaryf2() ȣ��� ���� ���� %d\n", sumaryf2(point, aryLength));

    return 0;
}

int sumaryf1(int ary[], int SIZE) 
{
	int sum = 0, sum1 = 0, i = 0;

	for (i = 0; i < SIZE; i++) {
		sum += ary[i];
		sum1 += *(ary + i);
	}
	printf("�Լ� sumaryf1() ���ο��� ���� ���� %d\n", sum1);

	return sum;
}

int sumaryf2(int *ary, int SIZE) 
{
	int sum = 0, i = 0;

	for (i = 0; i < SIZE; i++) {
		sum += *ary++;
	}

	return sum;
}
/*** End of aryfunction.c ***/ 