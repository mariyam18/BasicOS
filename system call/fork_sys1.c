#include<stdio.h>

int main()
{
	int p1,p2;
	printf("HELLO\n");
	p1=fork();					
		p2=fork();					
	printf("BYE\n");
	printf("%d %d\n",p1,p2);
	return 0;
}
