#include<stdio.h>
#include<conio.h>
void main()
long int n,count=0;
printf("Enter the number");
scanf("%ld",&n);
while(n!=0)
{
n=n/10;
count++;
}
printf("%ld",count);
getch();
}
