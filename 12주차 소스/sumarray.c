/****
 sumarray.c : 배열에서 모든 원소의 합을 구하는 프로그램
 ****/ 

#include <stdio.h> 

int sum(int g[], int n);	//배열 값을 모두 더하는 함수 원형

int main(void) 
{
    int i = 0, total = 0;

	// 배열 초기화
	int grade[] = {10, 20, 33, 35, 13, 79, 45};

	printf("7개의 정수 값은 다음과 같다. \n");	
	for (i = 0; i < 7; i++) 
	{
		printf("%d%s", grade[i], (i==6) ? "\n" : ", ");	
	}

	//배열 값을 모두 더하기 
	for (i = 0; i < 7; i++) total += grade[i];

	printf("\n메인에서 직접 구한 합은 %d 이고, \n", total);	
	printf("함수에서 구한 합은 %d 이다. \n", sum(grade, 7));	

	return 0;
}

//배열 값을 모두 더하는 함수 
int sum(int g[], int n) 
{
	int i = 0, total = 0;

	for (i = 0; i < n; i++) total += g[i];

	return total;
}
/************************* 프로그램 종료 *************************/