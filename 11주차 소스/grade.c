/****
 grade.c : ������ �迭���� ���ο� ������ �� ���ϱ�    
 ****/ 

#include <stdio.h> 

#define NUM_STUDENT 4	//�л� �� 
#define MID_INDEX 0		//�迭���� ������ �߰���簡 ����Ǵ� ÷��
#define FINAL_INDEX 1   //�迭���� ������ �⸻��簡 ����Ǵ� ÷��
#define SUM_INDEX 2     //�迭���� ������ ���� ����Ǵ� ÷��

void calcgrade(int g[][3]);		//����ó�� �Լ�����
void printgrade(int g[][3]);	//������� �Լ�����

///////////////////////////////////////////////////////////////////
int main(void) 
{
    int i = 0, total = 0;

	// �迭 �ʱ�ȭ
	int grade[][3] =  { {10, 20}, {33, 35},	{13, 79}, {60, 45},	{0,  0} };
	calcgrade(grade);	
	printgrade(grade);	

	return 0;
}

// ����ó�� �Լ� ���� //////////////////////////////////////////////
void calcgrade(int g[][3]) {
	int i = 0, j = 0;

	for (i = 0; i < NUM_STUDENT; i++) 
	{
		for (j = 0; j < SUM_INDEX; j++) g[i][SUM_INDEX] += g[i][j];
		g[NUM_STUDENT][MID_INDEX] += g[i][MID_INDEX];
		g[NUM_STUDENT][FINAL_INDEX] += g[i][FINAL_INDEX];
	}
}

//������� �Լ� ���� //////////////////////////////////////////////
void printgrade(int g[][3]) {
	int i = 0, j = 0;

    printf("   ***************************\n");
    printf("      �߰���� �⸻���  �� \n");
    printf("   ***************************\n");

	for (i = 0; i < NUM_STUDENT; i++)
		for (j = 0; j <= SUM_INDEX; j++) 
			printf("\t%3d%s", g[i][j], (j==SUM_INDEX) ? "\n" : "");

	printf("   ***************************\n");
	printf("\t%3d\t%d\n", g[NUM_STUDENT][MID_INDEX], g[NUM_STUDENT][FINAL_INDEX]);
    printf("   ***************************\n");
}
/******************************* ���α׷� ���� **********************************/