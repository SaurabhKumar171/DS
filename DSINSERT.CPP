#include<stdio.h>
void main()
{
int a[100],i,t,n,x;
printf("enter size");
scanf("%d",&n);
printf("enter elements\n ");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
 }
for(i=1;i<=n-1;i++)
{
 x=i;
 while(x>0 && a[x-1] > a[x])
 {
 t=a[x];
 a[x]=a[x-1];
 a[x-1]=t;
 x--;
 }
}
printf("sorted array ");
 for(i=0;i<=n-1;i++)
{
printf("%d\n",a[i]);
 }
}





