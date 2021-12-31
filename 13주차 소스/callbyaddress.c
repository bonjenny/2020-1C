/************************
  ���� : callbyaddress.c 
 ************************/ 

#include <stdio.h> 

void incrementbyvalue(int number);
void incrementbyaddress(int *number);

int main(void)
{
   int number = 10;

   printf("�Լ� main()���� \n");
   printf("\t�������� number�� �ּҰ� == %p, ���尪 == %d\n\n", &number, number);

   printf("\tincrementbyvalue(int number)�� ȣ�� =>> \n\n");
   incrementbyvalue(number);
   printf("\tincrementbyvalue(int number)�� ȣ�� ���� =>> \n");
   printf("\t�������� number�� �ּҰ� == %p, ���尪 == %d\n\n", &number, number);

   printf("\tincrementbyaddress(int *number)�� ȣ�� =>> \n\n");
   incrementbyaddress(&number);
   printf("\tincrementbyaddress(int *number)ȣ�� ���� =>> \n");
   printf("\t�������� number�� �ּҰ� == %p, ���尪 == %d\n\n", &number, number);

   return 0;
}

void incrementbyvalue(int number)
{
   number++;
   printf("\t\t�Լ� incrementbyvalue()���� \n");
   printf("\t\t\t�������� number�� �ּҰ� == %p, ���尪 == %d\n\n", &number, number);
}

void incrementbyaddress(int *number)
{
   (*number)++;
   printf("\t\t�Լ� incrementbyaddress()���� \n");
   printf("\t\t\t�������� number�� �ּҰ� == %p, ���尪 == %p\n\n", &number, number);
}
/*** End of callbyaddress.c ***/ 



