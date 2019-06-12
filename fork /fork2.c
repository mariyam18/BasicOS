#include<stdio.h>


int main()
{
	int p1,c,d;
	printf("HELLO\n");
	p1=fork();							//from this 2 child process created
	c=getpid();
	d=getppid();						//from this 1 child process created
	printf("BYE\n");
	printf("%d %d\n",c,d);
	return 0;
}




/*output
 HELLO
BYE
6767
BYE
6768
-------------------- 

HELLO
BYE
6896 6894				//id pid


------------------
(program exited with code: 0)
Press return to continue
BYE
6897 1375			//id pid(same as id of before but id is getting countinue refresh)

*/
