#include<stdio.h>
#include<conio.h>
void main()
{
 char s1[100],ch='.',*cha;
 printf("enter the string:");
 scanf("%[^\n]s",&s1);
 cha=strchr(s1,ch);
 printf("String after' %c' is : %s",ch ,cha+1);
 getch();
}
