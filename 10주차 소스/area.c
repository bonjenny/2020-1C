/*****
 파일 : area.c 
 *****/

#include <stdio.h>

double triangle(double w, double h);
double rectangle(double w, double h);

int main(void) 
{
	double width, height;

	printf("면적을 구할 삼각형과 사각형의 가로와 세로를 입력하세요.\n");
	scanf("%lf%lf", &width, &height);
	printf("\n입력하신 가로와 세로는");
	printf("\n각각 %lf와 %lf입니다.\n", width, height);

	printf("이 삼각형의 면적은 %.2lf입니다.\n", triangle(width, height) );
	printf("이 사각형의 면적은 %.2lf입니다.\n", rectangle(width, height) );

	return 0;
}

/**** 삼각형의 면적을 구하는 함수 구현 *****/
double triangle(double w, double h)
{
	return w * h / 2;
}

/**** 사각형의 면적을 구하는 함수 구현 *****/
double rectangle(double w, double h)

{
	return w * h;
}
