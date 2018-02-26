#include<stdio.h>
#include<conio.h>
void main()
{
int n,m,p;
printf("Enter two numbers:");
scanf("%d %d",&m,&n);
p=m*n;
if(p%2==0)
{
printf("Even");
}
else
{
printf("Odd");
}
getch();
}
