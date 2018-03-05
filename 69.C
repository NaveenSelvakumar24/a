#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
printf("Enter two numbers");
scanf("%d %d",&a,&b);
c=a-b;
if(c%2==0)
{
printf("The number is even");
}
else
{
printf("The number is odd");
}
getch();
}
