#include<stdio.h>

int main(int argc, char *argv[])
{
	unsigned int i=0;//consider size of i
	scanf("%u",&i);
	//n % 2^i = n & (2^i - 1)
	if( i & 0x1)
		printf("Odd\n");
	else
		printf("Even\n");

	return 0;
}
