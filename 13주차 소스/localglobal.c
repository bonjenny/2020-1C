/************************************************************/
/* ���� : localglobal.c */ 
/************************************************************/

#include <stdio.h> 

int gVar = 100;		//��������

///////////////////////////////////////////////////////
int main(void)  
{
    int count = 10;  //��������

    count += gVar;	
	printf("�Լ� main() :\n");
	printf("count = %5d, gVar = %5d\n\n", count, gVar);

	{
		int count = 100; //��������
		count += gVar++; 
		printf("\t�Լ� main() ������ ��� :\n");
		printf("\tcount = %5d, gVar = %5d\n\n", count, gVar);
	}

	printf("�Լ� main() :\n");
	printf("count = %5d, gVar = %5d\n", count, gVar);

	return 0;
}
/************************************************************/
