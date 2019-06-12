#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
	
	int fd=open("a.txt",O_WRONLY);	
	
	int s;
	s=write(fd,"file using system call ",20);
	printf("returned %d ",s);
	return 0;
}
