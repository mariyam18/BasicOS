	/*Program to implement the Shortest job first scheduling algorithm*/

	import java.util.*; 
	class sjf
	{ 
	public static void main(String args[]) 
	{  
	Scanner sc=new Scanner(System.in); 
	int n,BT[],WT[],TAT[], OUT[]; 
	System.out.println("Enter no of process"); 
	n=sc.nextInt(); 
	BT=new int[n+1]; 
	WT=new int[n+1]; 
	TAT=new int[n+1];
	OUT=new int[n+1];
	float AWT=0;
	float ATAT=0;

	System.out.println("Enter Burst time for each process"); 
	for(int i=0;i<n;i++) 
	{ 
	System.out.println("Enter BT for process "+(i+1)); 
	BT[i]=sc.nextInt(); 
	OUT[i]=i+1;
	}

	for(int i=0;i<n;i++) 
	{
	WT[i]=0; TAT[i]=0; 
	} 
	int temp; 
	for(int i=0;i<n-1;i++) 
	{
	for(int j=0;j<n-1;j++) 
	{ 
	if(BT[j]>BT[j+1])    
	{
	temp=BT[j]; 
	BT[j]=BT[j+1]; 
	BT[j+1]=temp; 
	//like process id
	temp=OUT[j]; 
	OUT[j]=OUT[j+1]; 
	OUT[j+1]=temp; 
	}
	}
	} 

	for(int i=0;i<n;i++) 
	{
	    TAT[i]=BT[i]+WT[i]; 
	    WT[i+1]=TAT[i]; 
	} 
	TAT[n]=WT[n]+BT[n]; 

	for(int j=0;j<n;j++) {
	    TAT[j]=WT[j]+BT[j];
	    AWT+=WT[j]; 
	}



	System.out.println("  PROCESS   BT      WT      TAT     "); 
	for(int i=0;i<n;i++) 
	System.out.println("    "+ OUT[i] + "       "+BT[i]+"       "+WT[i]+"       "+TAT[i]); 

	AWT=AWT/n; 
	System.out.println("***********************************************"); 
	System.out.println("Avg waiting time="+AWT+"\n***********************************************"); 

	for(int i=0;i<n;i++) 
	{ 
	TAT[i]=WT[i]+BT[i]; 
	ATAT=ATAT+TAT[i]; 
	}

	ATAT=ATAT/n; 
	System.out.println("***********************************************"); 
	System.out.println("Avg turn around time="+ATAT+"\n***********************************************"); 
	} 
	}


	 /* O/P for Shortest job first(sjf) scheduling algorithm is : 
	Enter no of process
	3
	Enter Burst time for each process
	Enter BT for process 1
	24
	Enter BT for process 2
	3
	Enter BT for process 3
	3
	  PROCESS   BT      WT      TAT     
	    2       3       0       3
	    3       3       3       6
	    1       24      6       30

	***********************************************
	Avg waiting time=3.0
	***********************************************
	***********************************************
	Avg turn around time=13.0
	***********************************************
	BUILD SUCCESSFUL (total time: 8 seconds)
	*/

