#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
	
	int fd=open("a.txt",O_RDONLY);				//fd=open("filename",O_RDONLY | O_CREAT  ,S_IWRXU)
	if(fd==-1)
		printf("Error! file did not open");
	else
		printf("file open successfully.And file got the file descripter %d\n",fd);
		char a[20];
		
		int r=read(fd,a,10);
		printf("these byte read are %s and size is %d\n",a,r);
		
		a[r]="\0";
	
		int status =close(fd);
		printf("%d\n",status);
		
		
return 0;
}
