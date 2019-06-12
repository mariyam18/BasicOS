#include<stdio.h>

int main()
{
int b,c,d,no,i,j;
int bt[10],at[10],ct[10],tat[10],wt[10],pno[10];
printf("Enter the number of processes::");
scanf("%d",&no);

for(i=0;i<no;i++)
{
printf("Enter the burst time::");
scanf("%d",&bt[i]);
pno[i]=i;
}

for(i=0;i<no;i++)
{
printf("Enter the arrival time::");
scanf("%d",&at[i]);
}

//sorting code

for(i=0;i<no;i++)
{
for(j=0;j<no;j++)
{
if(at[i]<at[j])
{
b=at[i];
at[i]=at[j];
at[j]=b;

c=bt[i];
bt[i]=bt[j];
bt[j]=c;

d=pno[i];
pno[i]=pno[j];
pno[j]=d;

}
}
}

printf("Based on their arrival time the processes will be alloted CPU in the following sequence:: ");

for(i=0;i<no;i++)
{
printf("\nProcess %d",at[i]);
}

ct[0]=bt[0];
//completion time
for(i=1;i<no;i++)
{
ct[i]=ct[i-1]+bt[i];
}

//tat time
for(i=0;i<no;i++)
{
tat[i]=ct[i]-at[i];
}


//waiting time
for(i=0;i<no;i++)
{
wt[i]=tat[i]-bt[i];
}
//display all values
printf("\nPno\tat\tbt\tct\ttat\twt");
for(i=0;i<no;i++)
{
printf("\n%d",pno[i]);
printf("\t %d",at[i]);
printf("\t %d",bt[i]);
printf("\t %d",ct[i]);
printf("\t %d",tat[i]);
printf("\t %d",wt[i]);
printf("\n");

}
}
