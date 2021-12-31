/***********************************************/
/* ÆÄÀÏ : numberguess.c */ 
/***********************************************/

#include "numberguess.h"

int number = 0;

/////////////////////////////////////////////
int main(void) 
{
    auto int guess = 0;

	setNumber();
    printHead();
	while( scanf("%d", &guess) ) 
	{
		if (guess < number) 
		{
			printHigher(guess);
		} 
		else if (guess > number) 
		{
			printLower(guess);
		} 
		else 
		{
			printAnswer();
			break; 
		}
	}
}
/***********************************************/

