#include<stdio.h>
#include<conio.h>
void main()
{
char a[10];
printf("Enter a string");
scanf("%s",a);
int n,m,i;
scanf("%d",&n);
m=strlen(a);
for(i=n;i<m;i++)
{
printf("%c",a[i]);
}
getch();
}
