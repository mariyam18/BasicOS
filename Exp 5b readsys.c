
#include<stdio.h>
#include <fcntl.h>
int main()
{
int fd, c;
  
//the character array a will store the characters that were read from the file
 char a[11];
 
  fd = open("m.txt", O_RDWR);
 	 
//variable c will store the no of bytes that were read from the file

  if(fd<0)
    printf("File could not be read");
   
   else
   {
  c = read(fd, a, 30);
 
  printf("Number of bytes that were read are %d",c);
  
  a[c] = '\0';
  
  printf("\n Those bytes are as follows: %s\n", a);
   }
}
