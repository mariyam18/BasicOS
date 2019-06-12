#include<stdio.h>
int main()
{
int i,j,n,a[50],frame[10],no,k,avail,count=0,hit;
printf("Enter The Frame Size => ");
scanf("%d",&no);
printf("\nEnter The Number Of Pages => ");
scanf("%d",&n);
printf("Enter The Page No =>\n");
for(i=1;i<=n;i++)
{
scanf("%d",&a[i]);
}
printf("\n");
for(i=0;i<no;i++)
frame[i]= -1;
j=0;
for(i=1;i<=n;i++)
{

	avail=0;
	for(k=0;k<no;k++)
		if(frame[k]==a[i])
				avail=1;
		if (avail==0)
		{
			frame[j]=a[i];
			j=(j+1)%no;
			count++;
		for(k=0;k<no;k++)
		printf("%d\t",frame[k]);
		}
	printf("\n");
}
hit=n-count;
printf("Page Fault Is => %d",count);
printf("\nPage Hit Is=> %d",hit);
return 0;
}
