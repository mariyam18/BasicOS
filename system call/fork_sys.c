#include<stdio.h>

int main()
{
	int p;
	printf("HELLO \n");
	p=fork();					
	
	printf("BYE\n");
	if(p<0)						
	printf("Child process not created\n");
	else
	{
		if(p>0)							
			printf("child process created.Its process ID id %d\n",p);
		else                            
		{
			printf("In child process.My ID is %d\n",p);
		}
	
	}
	return 0;
}
