#include<stdio.h>
#include <fcntl.h>
int main()
{
  int c;

  int fd = open("m.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
  if (fd < 0)
  {
     printf("File could not be opened ");
  }

 c = write(fd, "kalsekar technical campus\n");
 
  printf("Number of characters that were written are %d",c);
 
  close(fd);

}
