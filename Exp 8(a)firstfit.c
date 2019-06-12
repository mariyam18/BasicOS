#include<stdio.h>
int main()
{

int bno=0,pno=0,i,j,b[bno],p[pno],alloc[pno];
int flag[pno];
printf("Enter the number of freely available memory blocks::");
scanf("%d",&bno);


printf("Enter the block size::");
for(i=0;i<bno;i++)
{
	scanf("%d",&b[i]);
}

printf("Enter the number of processes::");
scanf("%d",&pno);
for(i=0;i<pno;i++)
flag[i]=0;

printf("Enter the process size::");
for(i=0;i<pno;i++)
{
	scanf("%d",&p[i]);
}
for(i=0;i<pno;i++)
{
		for(j=0;j<bno;j++)
	{
		 //size=b[j]-p[i];
		//printf("size=%d",size);
		if(b[j]>=p[i])
		{
		alloc[i]=j;	
		b[j]=b[j]-p[i];
		flag[i]=1;
printf("\nremaining size in block %d is %d",j,b[j]);
break;
		}
		}
	
	}

for(i=0;i<pno;i++)
{
	if(flag[i]==1)
	printf("\nprocess=%d,block=%d",i,alloc[i]);
	
	else
	printf("\nProcess=%d Not allocated",i);


}
}
