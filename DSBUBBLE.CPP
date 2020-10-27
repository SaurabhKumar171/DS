#include<stdio.h>
void main()
{
int a[100],i,j,n,s;
printf("enter size");
scanf("%d",&n);
printf("enter elements\n ");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
 }
 for(i=0;i<n-1;i++)
 {
   for(j=0;j<n-i-1;j++)
 {
  if(a[j]>a[j+1])
  {
   s=a[j];
   a[j]=a[j++];
   a[j+1]=s;
  }
 }
 }
printf("sorted in ascending order");
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
}





