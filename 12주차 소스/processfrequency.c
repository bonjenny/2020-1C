/****
 processfrequency.c : �迭�� ����� ���� �������� ���� Ƚ���� ����ϰ� 
                      �� �߿��� ���� ���� ������ ���� ����� ���
 ****/ 

#include <stdio.h>
#define SIZE 60

void mean(int [] );
void mode(int [], int []) ;
void printArray(int []);

int main()
{
   int frequency[10] = { 0 };
   int response[SIZE] = {
        5, 6, 7, 2, 5, 3, 9, 4, 6, 4,
        4, 8, 0, 6, 3, 7, 0, 2, 0, 8,
        7, 8, 0, 5, 8, 7, 3, 9, 7, 8,
		3, 5, 2, 9, 7, 5, 3, 8, 7, 2,
        7, 4, 7, 2, 5, 3, 8, 7, 5, 6,
        4, 7, 6, 1, 6, 5, 7, 7, 7, 6 };

   printArray(response);
   mean(response);
   mode(frequency, response);

   return 0;
}

//////////////////////////////////////////////////
void printArray(int a[])
{
   int j;
   printf("������ ���� 0���� 9������ �������� \n");
   for (j = 0; j < SIZE; j++) 
   {
      if (j%20 == 0) printf( "\n" );
      printf("%2d", a[j]);
   }
   printf("\n\n");
}

//////////////////////////////////////////////////
void mean(int answer[])
{
   int j, total = 0;

   printf("%s\n%s\n%s\n", "********", "  ���", "********");
   for (j = 0; j < SIZE; j++) total += answer[j];
   printf( "�迭 ������ ����� ���Ϸ��Ѵ�.\n�迭 ������ ���� %d�̰� �迭 ������ ��ü ���� %d�̹Ƿ�"
		   "\n����� %.4f �̴�.\n", SIZE, total, (double) total / SIZE );
}

//////////////////////////////////////////////////
void mode(int freq[], int answer[])
{
   int rating, j, h, largest = 0, modeValue = 0;

   printf( "\n%s\n%s\n%s\n", "********", "  ����", "********" );
   for ( rating = 0; rating <= 9; rating++ ) freq[rating] = 0;
   for ( j=0; j <= SIZE - 1; j++ ) ++freq[answer[j]];

   printf("-------------------------------------------------------\n");
   printf("%10s%10s%8s%-20s\n\n", "��", "Ƚ��", " ", "������׷�");
   printf("%28s%-40s\n%28s%-40s\n", " ", "         1    1    2    2", " ", "1   5    0    5    0    5" );
   printf("-------------------------------------------------------\n");

   for (rating = 0; rating <= 9; rating++)
   {
      printf("%10d%10d%8s", rating, freq[rating], " ");
      if (freq[rating] > largest)
	  {
         largest = freq[ rating ];
         modeValue = rating;
      }
      for (h = 1; h <= freq[rating]; h++) printf( "*" );
      printf( "\n" );
   }
   printf("-------------------------------------------------------\n");

   printf( "���������� ���� �� Ƚ���� ��Ÿ����.\n�м� ���, ���� ���� �󵵼��� �� "
		   "%d��(��) %d�� ��Ÿ����.\n", modeValue, largest );
}
/**************************************** ���α׷� ���� *************************************************/