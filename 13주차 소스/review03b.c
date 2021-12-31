#include <stdio.h>

int g = 100;
void function(int n);

int main(void)
{
	int ary[5] = {32, 24, 71, 15, 23};
	
	function(ary[4]);
	function(ary[4]);

	printf("%d \n", ary[4]);	
	printf("%d \n", g);

	return 0;
}

void function(int n)
{
	static int s = 200;

	g = g + s;
	n++;
	s++;
}

