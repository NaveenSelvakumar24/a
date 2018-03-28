#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,mod;
printf("Enter three numbers");
scanf("%d %d %d",&a,&b,&c);
mod=((a*b)%c);
printf("\n%d",mod);
getch();
}
