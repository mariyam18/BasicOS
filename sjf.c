#include<stdio.h>
#include<stdlib.h>
int main()
{
int n,i,j,temp,a=0,b=0;
float avgtat,avgwt;
printf("Enter The No. Processes =>");
scanf("%d",&n);
int pno[n],at[n],bt[n],ct[n],tat[n],wt[n];
printf("\nEnter Arrival & Burst Time...\n");
for(i=0;i<n;i++)
{
printf("Arrival & Burst Of P[%d] =>",i+1);
scanf("%d%d",&at[i],&bt[i]);
pno[i]=i+1;
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(bt[i]>bt[j])
{
temp=at[i];
at[i]=at[j];
at[j]=temp;

temp=bt[i];
bt[i]=bt[j];
bt[j]=temp;

temp=pno[i];
pno[i]=pno[j];
pno[j]=temp;
}
}
}
tat[0]=bt[0];
wt[0]=0;
ct[0]=bt[0];
for(i=1;i<=n;i++)
{
ct[i]=abs(ct[i-1]+bt[i]);
}
for(i=1;i<n;i++)
{
tat[i]=abs(ct[i]-at[i]);
wt[i]=abs(tat[i]-bt[i]);
}
for(i=0;i<n;i++)
{
a=a+tat[i];
b=b+wt[i];
}
avgtat=a/n;
avgwt=b/n;
printf("\n\nP No.\tAT\tBT\tCT\tTAT\tWT");
for(i=0;i<n;i++)
{
printf("\nP%d\t%d\t%d\t%d\t%d\t%d",pno[i],at[i],bt[i],ct[i],tat[i],wt[i]);
}
printf("\n\nAverage Turnaround Time => %f",avgtat);
printf("\nAverage Waiting Time => %f",avgwt);
}

