#include<stdio.h>
#include<conio.h>
void main()
{
char str[20];
int k,i;
printf("enter the string and k value");
scanf("%s %d",&str,&k);
for(i=0;i<k;i++)
{
printf("%c ",str[i]);
}
getch();
}
