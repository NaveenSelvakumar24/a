#include<stdio.h>
#include<conio.h>
void main()
{
int m,n,o;
printf("Enter a number");
scanf("%d",&n);
printf("Enter two numbers");
scanf("%d %d",&m,&o);
if(m>n)
{
if(m<o)
printf("yes");
}
else
{
printf("no");
}
getch();
}
