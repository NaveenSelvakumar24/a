#include <stdio.h>
void main()
{
long int b,i,j,t;
printf("enter the number");
scanf("%ld",&b);
long int a[b];
for(i=0;i<b;i++)
{
scanf("%ld ",&a[i]);
}
for(i=0;i<b;i++)
{
for(j=i+1;j<b;j++)
{
 if(a[i]>a[j])
{
 t=a[i];
a[i]=a[j];
a[j]=t;
}
}
}
for(i=0;i<b;i++)
 printf("%ld ",a[i]);
}
