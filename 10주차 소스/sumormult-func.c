/*****
 파일 : sumormult-func.c 
 *****/

#include <stdio.h> 

//두 개의 함수 정의(구현)
long sum(int n) { 
	long result = 0;
	int i = 1;

	for(i = 1; i <= n; i++)
	{
		result += i;
	}
	return result;
}

long mult(int n) {
	long result = 1;
	int i = 1;

	for(i = 2; i <= n; i++)
	{
		result *= i;
	}
	return result;
}

int main(void) {
	int n = 1, i = 1;
	long result = 0;

	//표준입력으로 정수 읽기
	//A. 사용자 입력 정수 n을 표준입력으로 하나의 변수에 저장
	printf("양의 정수를 하나 입력하세요. ");
	scanf("%d", &n);

	//짝수, 홀수 구분 
	//B. 위 변수의 값을 조사하여 짝수이면 합을 홀수이면 곱을 구하자.
    if (n%2 == 0)
	{	
		result = sum(n);		//함수 sum() 호출
	} else 
	{	
		result = mult(n);		//함수 mult() 호출
	}

	//출력
	//C. 결과를 출력
	printf("%2d부터 %3d까지의 %s은 %3d입니다. \n", 1, n, (n%2) ? "곱" : "합", result);

	return 0;
}