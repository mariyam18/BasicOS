#include<stdio.h>

int main()
{
	int p;
	printf("HELLO \n");
	p=fork();					//for creating new process
	
	printf("BYE\n");
	if(p<0)								//if child process not created
		printf("Child process not created\n");
	else
	{
		if(p>0)							//ifchild process created
			printf("child process created.Its process ID id %d\n",p);
		else                            //process is in child process(i.e id=0)
		{
			printf("In child process.My ID is %d\n",p);
		}
	
	}
	return 0;

}
/*NOTE
 after fork() function all code run in child process
 And in child process fork() return zero i.e its ID in child process is 0
 */
 
 
/*output
HELLO								//parent process output
BYE
child process created.Its process ID id 6076
BYE										//child process output
In child process.My ID is 0
*/
