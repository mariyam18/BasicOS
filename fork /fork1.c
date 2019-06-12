#include<stdio.h>

int main()
{
	int p1,p2;
	printf("HELLO\n");
	p1=fork();							//from this 2 child process created
	p2=fork();							//from this 1 child process created
	printf("BYE\n");
	printf("%d %d\n",p1,p2);
	return 0;
}



/*OUTPUT
 HELLO						// parent process output
BYE
6564 6565
BYE							//child process of fork 1 o/p
0 6566


------------------
(program exited with code: 0)
Press return to continue
BYE							//child process of fork 1.1 o/p
6564 0
BYE							//child process of fork 2 o/p
0 0
*/
