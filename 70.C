#include<stdio.h>
#include<conio.h>
void main()
{
int n;
printf("Enter a number");
scanf("%d",&n);
int p=1;
while(p<n)
{
p<<1;
printf("%d",p);
}
getch();
}
