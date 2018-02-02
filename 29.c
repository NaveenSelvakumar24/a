#include<stdio.h>
#include<conio.h>
void main()
{
int hour,minute;
printf("Enter the minutes");
scanf("%d",&minute);
hour=minute/60;
printf("The hours is: %d",hour);
minute=minute-hour*60;
printf("The minutes is: %d",minute);
getch();
}
