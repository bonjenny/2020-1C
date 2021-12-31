/*********************
  파일 : pfunarray.c
 *********************/

#include <stdio.h>

void add(double*, double, double);
void subtract(double*, double, double);
void multiply(double*, double, double);
void devide(double*, double, double);

int main(void) 
{
	double m, n, result;
	int opmenu;
	char *opstr[4] = {"더하기", "빼기", "곱하기", "나누기"};
	char op[4] = {'+', '-', '*', '/'};

	void (*pfary[4])(double*, double, double) = {add, subtract, multiply, devide};

	printf("사칙연산을 위하여 각 연산에 대한 번호를 입력하세요. >> \n");
	printf("[더하기] : 0, [빼기] : 1, [곱하기] : 2, [나누기] : 3\n");
	scanf("%d", &opmenu);

	if ( !(0 <= opmenu && opmenu <= 3) ) 
	{
		printf("\메뉴 입력이 잘못되어 프로그램을 종료합니다.\n");
		return 0;
	}

	printf("\n사칙연산을 수행할 실수 2개를 입력하세요. >> ");
	scanf("%lf %lf", &m, &n);

	printf("\n함수 pfary[0] 저장값 == %p, 함수      add() 주소 == %p\n", pfary[0], add);
	printf("함수 pfary[1] 저장값 == %p, 함수 subtract() 주소 == %p\n", pfary[1], subtract);
	printf("함수 pfary[2] 저장값 == %p, 함수 multiply() 주소 == %p\n", pfary[2], multiply);
	printf("함수 pfary[3] 저장값 == %p, 함수   devide() 주소 == %p\n", pfary[3], devide);

	//사칙연산을 배열의 첨자를 이용하여 수행
	pfary[opmenu](&result, m, n);  

	printf("\n문장 : pfary[%d] 함수 호출\n", opmenu); 
	printf("%s 수행 : %lf %c %lf == %lf\n\n", opstr[opmenu], m, op[opmenu], n, result);

	return 0;
}
/*** End of pfunarray.c ***/ 

