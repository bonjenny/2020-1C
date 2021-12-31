/*=================== 파일 : marriage.c ==================*/ 

#include <stdio.h> 

int main(void) 
{
	char man = 0;
	int age = 0;

	printf("성별(남자면 M을 여자면 W)을 입력 하세요. > ");	
	scanf("%c", &man);	
	printf("나이를 입력 하세요. > ");	
	scanf("%d", &age);
	
	if (man == 'm' || man == 'M') 
	{
		printf("당신은 남자이며 ");	
		if (age >= 18)
		{
			printf("결혼이 가능합니다.\n");	
		} 
		else 
		{
			printf("결혼이 불가능합니다.\n");	
		} 
	}
	else
	{
		printf("당신은 여자이며 ");	
		if (age >= 16)
		{
			printf("결혼이 가능합니다.\n");	
		} 
		else 
		{
			printf("결혼이 불가능합니다.\n");	
		} 
	};

	return 0;
}
/*>>>>>>>>>>>>>>>>>>  End of marriage.c  <<<<<<<<<<<<<<<<<<*/
