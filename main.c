#include<stdio.h>

int main(int argc, char *argv[])
{
	unsigned int i=0;
	scanf("%u",&i);
	if( i & 0x1)
		printf("Odd\n");
	else
		printf("Even\n");

	return 0;
}
