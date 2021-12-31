/****
 grade.c : 간단히 배열에서 가로와 세로의 합 구하기    
 ****/ 

#include <stdio.h> 

#define NUM_STUDENT 4	//학생 수 
#define MID_INDEX 0		//배열에서 개인의 중간고사가 저장되는 첨자
#define FINAL_INDEX 1   //배열에서 개인의 기말고사가 저장되는 첨자
#define SUM_INDEX 2     //배열에서 개인의 합이 저장되는 첨자

void calcgrade(int g[][3]);		//성적처리 함수원형
void printgrade(int g[][3]);	//성적출력 함수원형

///////////////////////////////////////////////////////////////////
int main(void) 
{
    int i = 0, total = 0;

	// 배열 초기화
	int grade[][3] =  { {10, 20}, {33, 35},	{13, 79}, {60, 45},	{0,  0} };
	calcgrade(grade);	
	printgrade(grade);	

	return 0;
}

// 성적처리 함수 구현 //////////////////////////////////////////////
void calcgrade(int g[][3]) {
	int i = 0, j = 0;

	for (i = 0; i < NUM_STUDENT; i++) 
	{
		for (j = 0; j < SUM_INDEX; j++) g[i][SUM_INDEX] += g[i][j];
		g[NUM_STUDENT][MID_INDEX] += g[i][MID_INDEX];
		g[NUM_STUDENT][FINAL_INDEX] += g[i][FINAL_INDEX];
	}
}

//성적출력 함수 구현 //////////////////////////////////////////////
void printgrade(int g[][3]) {
	int i = 0, j = 0;

    printf("   ***************************\n");
    printf("      중간고사 기말고사  합 \n");
    printf("   ***************************\n");

	for (i = 0; i < NUM_STUDENT; i++)
		for (j = 0; j <= SUM_INDEX; j++) 
			printf("\t%3d%s", g[i][j], (j==SUM_INDEX) ? "\n" : "");

	printf("   ***************************\n");
	printf("\t%3d\t%d\n", g[NUM_STUDENT][MID_INDEX], g[NUM_STUDENT][FINAL_INDEX]);
    printf("   ***************************\n");
}
/******************************* 프로그램 종료 **********************************/