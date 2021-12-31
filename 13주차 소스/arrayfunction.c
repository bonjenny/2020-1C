/***********************
  파일 : aryfunction.c 
 ***********************/

#include <stdio.h>

int sumaryf1(int ary[], int SIZE);
int sumaryf2(int *ary,  int SIZE);

int main(void) 
{
	int i = 0, sum = 0, aryLength;
	int point[] = {95, 88, 76, 54, 85, 33, 65, 78, 99, 82};
	aryLength = sizeof (point) / sizeof (int); 

	printf("배열 point[i]를 이용하여 원소 값을 출력 \n");
	for (i = 0; i < aryLength; i++) {
		sum += point[i];
		printf("%d%s", point[i], i == aryLength - 1 ? "\n" : ", ");
	}
	printf("메인에서 구한 합은 %d\n\n", sum);

	printf("함수 sumaryf1() 호출로 구한 합은 %d\n", sumaryf1(point, aryLength));
	printf("함수 sumaryf2() 호출로 구한 합은 %d\n", sumaryf2(point, aryLength));

    return 0;
}

int sumaryf1(int ary[], int SIZE) 
{
	int sum = 0, sum1 = 0, i = 0;

	for (i = 0; i < SIZE; i++) {
		sum += ary[i];
		sum1 += *(ary + i);
	}
	printf("함수 sumaryf1() 내부에서 구한 합은 %d\n", sum1);

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