#include<stdio.h>
#include<conio.h>
void main()
{
int n;
printf("Enter a number");
scanf("%d",&n);
while(n!=0)
{
if(n%10==0)
{
printf("%d",n);
}
n++;
}
getch();
}
