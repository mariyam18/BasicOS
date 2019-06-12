#include<stdio.h>
#include<sys/types.h>
#include<wait.h>
#include<unistd.h>

int  main()
{ 
int status=0;
int pid,m,id=0;
pid=fork();


if(pid==0)
{
printf("\nI am in child process");
printf("\nMy pid is %d",getpid());
printf("\nMy parent's pid is %d",getppid());
printf("\nChild process exited");	

}

else if(pid<0)
printf("Error!!!Child process is not created");

else
{
id=wait(NULL);
printf("\nchilds id is %d",pid);
printf("\nI am in parent process");
printf("\nMy pid is %d",getpid());
printf("\nMy parent's pid is %d",getppid());
pid_t id1=waitpid(pid,&status,0);
printf("\n child with id %d completed ",id);
}

return 0;
}
