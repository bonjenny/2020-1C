/***************************
  파일 : pointerfunction.c
 ***************************/

#include <stdio.h>

void add(double*, double, double);
void subtract(double*, double, double);
void multiply(double*, double, double);
void devide(double*, double, double);

int main(void) 
{
	double m, n, result;
	void (*pf)(double*, double, double) = NULL;

	printf("함수 포인터 변수 void (*pf)(double*, double, double) = NULL; 실행 후\n");
	printf("함수 포인터 변수 pf 주소값 : %p\n", &pf);
	printf("함수 포인터 변수 pf 저장값 : %p\n", pf);
	printf("함수 포인터 변수 pf 바이트 크기 : %d\n\n", sizeof(pf));

	printf("\n사칙연산을 수행할 실수 2개를 입력하세요. >> ");
	scanf("%lf %lf", &m, &n);

	//사칙연산을 수행
	pf = add;
	pf(&result, m, n);  //add(&result, m, n);
	printf("\n문장 : pf = add; 실행 후 함수 호출\n"); 
	printf("함수 포인터 변수 pf 저장값 == %p, 함수 add() 주소 == %p\n", pf, add);
	printf("더하기 수행 : %lf + %lf == %lf\n\n", m, n, result);

	pf = subtract;
	pf(&result, m, n);  //subtract(&result, m, n);
	printf("문장 : pf = subtract; 실행 후 함수 호출\n"); 
	printf("함수 포인터 변수 pf 저장값 == %p, 함수 subtract() 주소 == %p\n", pf, subtract);
	printf("  빼기 수행 : %lf - %lf == %lf\n\n", m, n, result);

	pf = multiply;
	pf(&result, m, n);  //multiply(&result, m, n);
	printf("문장 : pf = multiply; 실행 후 함수 호출\n"); 
	printf("함수 포인터 변수 pf 저장값 == %p, 함수 multiply() 주소 == %p\n", pf, multiply);
	printf("곱하기 수행 : %lf * %lf == %lf\n\n", m, n, result);

	pf = devide;
	pf(&result, m, n);  //devide(&result, m, n);
	printf("문장 : pf = devide; 실행 후 함수 호출\n"); 
	printf("함수 포인터 변수 pf 저장값 == %p, 함수 devide() 주소 == %p\n", pf, devide);
	printf("나누기 수행 : %lf / %lf == %lf\n\n", m, n, result);

	return 0;
}
/*** End of pointerfunction.c ***/ 

 

