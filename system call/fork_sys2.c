#include<stdio.h>


int main()
{
	int p1,c,d;
	printf("HELLO\n");
	p1=fork();							
	c=getpid();
	d=getppid();						
		printf("BYE\n");
	printf("%d %d\n",c,d);
	return 0;
}
