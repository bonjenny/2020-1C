/****
 * initialize.c : int, double, char 형 배열을 초기화하여 출력
 ****/ 

#include <stdio.h> 

int main(void) 
{
    int i = 0;

	// 배열 초기화
	int a[5] = {10, 20, 33, 35, 13};
	// 배열 초기화
	double b[4] = {1.2, 2.4, 3.5};
	// 배열 초기화
	char c[] = {'$', '&', '*'};

	//선언된 배열 값을 출력
	printf("int a[5] = {10, 20, 33, 35, 13}; 이후 출력 >>\n");
	for (i = 0; i < 5; i++) 
		printf("%d%s", a[i], (i==4) ? "\n\n" : ", ");	
	
	printf("double b[4] = {1.2, 2.4}; 이후 출력 >>\n");
	for (i = 0; i < 4; i++) 
		printf("%lf%s", b[i], (i==3) ? "\n\n" : ", ");	
	
	printf("char c[] = {'$', '&', '*'}; 이후 출력 >>\n");
	for (i = 0; i<3; i++) 
		printf("%c%s", c[i], (i==2) ? "\n" : ", ");	

	return 0;
}
/****************** 프로그램 종료 *******************************/
