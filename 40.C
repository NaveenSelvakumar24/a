#include<stdio.h>
#include<conio.h>
void main()
{
int i,num,n,m,s;
clrscr();
printf("Enter the limit for fibonacci series");
scanf("%d",&num);
for(i=0;i<=num;num++);
{
n=0;
s=n+m;
n=m;
m=s;
printf("Fibonacci series: %d",s);
}
getch();
}

