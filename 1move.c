#include<sys/types.h>
#include<sys/stat.h>
#include<stdio.h>
#include<fcntl.h>
main( int argc,char *argv[] )
{
int i,fd1,fd2;
char *file1,*file2,buf[20];

file1=argv[1];
file2=argv[2];

printf("file1=%s ",file1);
printf("file2=%s ",file2);

fd1=open(file1,O_RDONLY,0);
fd2=creat(file2,0777);
//fd2=open(file2,O_RDWR|O_CREAT,0777);

while(i=read(fd1,buf,20)>0)
write(fd2,buf,20);
//remove(file1);
close(fd1);
close(fd2);
}
