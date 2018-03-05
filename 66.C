#include<stdio.h>
#include<conio.h>
void main()
{
int i,n;
printf("Enter a number");
scanf("%d",&n);
if(n==0)
{
printf("Invalid number");
}
else if(num==1)
{
printf("it is neither prime nor composite");
}
else
{
for(i=2;i<=n;i++)
{
if(n%i==0 && n!=i)
{
printf("not prime");
}
if(n%i==0 && n=i)
{
printf("prime");
}
}
getch();
}

