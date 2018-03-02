#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,n,c,i;
a=0;
b=1;
printf("Enter the value");
scanf("%d",&n);
printf("Fibonnacci series");
for(i=0;i<=n:i++)
{
c=a+b;
a=b;
b=c;
printf("%d",c);
}
getch();
}
