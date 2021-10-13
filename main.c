#include<stdio.h>

int main(int argc, char *argv[])
{
	unsigned int i=0;
	//64bits value range: 0~(2^64)-1
	//0~18446744073709551616
	scanf("%u",&i);
	if( i & 0x1)
		printf("Odd\n");
	else
		printf("Even\n");

	return 0;
}
