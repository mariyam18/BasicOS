#include<stdio.h>
#include<fcntl.h>

int main()
{     int status;
    // if file does not have in directory 
    // then file ktc is created.
    
    int fd = open("ktc", O_RDONLY|O_CREAT); 
     
     
    if (fd ==-1)
    {
        printf("Error"); 
                       
    }
    
    else
    printf("The file was opened with file descriptor %d \n", fd);
    
    status=close(fd);
    
    printf("File closed with the status %d",status);
    return 0;
}
