#include<stdio.h>
int temp[100]={};
int findApplicable(int totalblk,int blksize[],int totalblkele,int blkelement[],int blkno[],int j)
{
int i;
for(i=0;i<totalblk;i++)
{
if(blksize[i]>=blkelement[j])
{
temp[i]=blksize[i];
}
}
for(i=0;i<totalblk;i++)
{
if(temp[i]==0||temp[i]!=blksize[i])
temp[i]=-1;
}
return temp[i];
}
int findLargest(int temp[],int totalblk)
{
int i,j=0;
for(i=0;i<totalblk;i++)
{
for(j=i+1;j<totalblk;j++)
{
if(temp[i]<temp[j])
{
temp[50]=temp[j];
temp[j]=temp[i];
temp[i]=temp[50];
}
}
temp[50]=temp[0];
}
return temp[50];
}
void worstFit(int temp[],int totalblk,int blksize[],int totalblkele,int blkelement[],int blkno[],int i,int j){
for(i=0;i<totalblk;i++){
if(temp[50]==blksize[i]&&blksize[i]!=-1){
printf("\n\t%d\t|\t\t%d\t\t|\t\t%d",blkno[j],blkelement[i],blksize[j]);
blksize[i]=-1;
}
}
for(i=0;i<totalblk;i++)
temp[i]=0;
temp[50]=0;
j+=1;
if(j<totalblkele){
temp[totalblk]=findApplicable(totalblk,blksize,totalblkele,blkelement,blkno,j);
findLargest(temp,totalblk);
worstFit(temp,totalblk,blksize,totalblkele,blkelement,blkno,0,j);
}
}
int main(){
int i,j,totalblk,blksize[10],totalblkele,blkelement[10]={},blkno[10];
printf("Enter The Total No. Of Block =>");
scanf("%d",&totalblk);
for(i=0;i<totalblk;i++){
printf("Enter Block Size[%d] => ",i+1);
scanf("%d",&blksize[i]);
blkno[i]=i+1;
}
printf("\nEnter Total No. Process => ");
scanf("%d",&totalblkele);
for(j=0;j<totalblkele;j++){
printf("Enter Process Element[%d] => ",j+1);
scanf("%d",&blkelement[j]);
}
printf("\nBlock Number\t|\tProcess Elements\t|\tBlock Size");
temp[totalblk]=findApplicable(totalblk,blksize,totalblkele,blkelement,blkno,0);
findLargest(temp,totalblk);
worstFit(temp,totalblk,blksize,totalblkele,blkelement,blkno,0,0);
return 0;
}
