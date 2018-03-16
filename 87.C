#include<stdio.h>
#include<conio.h>
void main()
{
int x,y,gec,remainder;
printf("Enter two numbers");
scanf("%d %d",&x,&y);
do
{
remainder=x%y;
if(remainder==0)
break;
x=y;
y=remainder;
}while(remainder!=0);
gcd=y;
printf("\n the gcd of the given number is: %d",gcd);
}
getch();
}
