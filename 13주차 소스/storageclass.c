/********************************************************/
/* ���� : storageclass.c */ 
/********************************************************/

#include <stdio.h> 
#include <stdlib.h> /* �Լ� malloc()�� ���� ������� */

void function( void );

int gx = 1;      /* ���� ���� */
int gy = 5;      /* ���� ���� */

//////////////////////////////////////////////////////
int main(void)
{
	int mainx = 50;   /* ���� �Լ��� ���� ���� */

	/* �����Ҵ� ������ 17�忡�� �н��� ����*/
	int *ip = (int *) malloc( sizeof(int) );
	*ip = 10;

	printf("������ ����(data area) : ��������\n");
	printf("\t\t\tgx(%d) : \t%p\n", gx, &gx);
	printf("\t\t\tgy(%d) : \t%p\n\n", gy, &gy);

	printf("���� ����(stack area) : ��������\n");
	printf("\t\t\tmainx(%d) : \t%p\n", mainx, &mainx);
	function();

	printf("�� ����(heap area) : �����Ҵ纯��\n");
	printf("\t\t\tip(%d) : \t%p\n\n", *ip, ip);

	return 0;
}

/////////////////////////////////////////////////////
void function( void )
{
	auto int fa = 25;  
	static int fs;  

	printf("\t\t\tfa(%d) : \t%p\n\n", fa, &fa);
	printf("������ ����(data area) : ��������\n");
	printf("\t\t\tfs(%d) : \t%p\n\n", fs, &fs);
}
/********************************************************/

