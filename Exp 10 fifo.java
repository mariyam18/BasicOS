import java.io.*;
public class fifo
{
    public static void main(String[] args) throws IOException
    {
        int f,p,num=0, pageHit=0,pagefault=0;
        
        int pages[];
        int frame[];
        boolean flag = true;
      
        BufferedReader br= new BufferedReader(new InputStreamReader(System.in));
       
 System.out.println("Enter number of frames : ");
 f = Integer.parseInt(br.readLine());
      
  System.out.println("Enter number of pages : ");
  p = Integer.parseInt(br.readLine());
 
//arrays for storing the frame content and array for storing the page requests     
        frame = new int[f];
        pages = new int[p];
      
//to store -1 in all the place of frames
        for(int i=0; i<f; i++)
        {
            frame[i] = -1;
        }
      
        System.out.println("Enter page number : ");
        for(int i=0;i<p;i++)
            pages[i] = Integer.parseInt(br.readLine());
      
        for(int i=0; i<p; i++)
        {
            flag = true;
//storing one page at a time in a variable called page
            int page = pages[i];
            for(int j=0; j<f; j++)
            {
//checking if the page requested is already present in the frame...if yes then increment the pagehit counter
                if(frame[j] == page)
                {
                    flag = false;
                    pageHit++;
                    break;
                }
            }
//if the index of frame has become equal to the frame size
            if(num == f)
                num = 0;
          
            if(flag)//this is for case when there is fault
            {
                frame[num] = page;
                num++;
                pagefault++;
            }
//printing the frame content
            System.out.print("frame : ");
            for(int k=0; k<f; k++)
                System.out.print(frame[k]+" ");
            System.out.println();
          
        }
        System.out.println("No. of page hit : "+pageHit);

        System.out.println("No. of page fault : "+pagefault);

    }
}



/*
C:\amp>javac fifo.java

C:\amp>java fifo
Enter number of frames :
3
Enter number of pages :
6
Enter page number :
3
2
2
4
5
4
frame : 3 -1 -1
frame : 3 2 -1
frame : 3 2 -1
frame : 3 2 4
frame : 5 2 4
frame : 5 2 4
No. of page hit : 2
*/


