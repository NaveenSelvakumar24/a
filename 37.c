#include <stdio.h>
int main()
{
int 1stnumber,2ndnumber,temp;
printf("Enter 1stnum ");
scanf("%lf", &1stnumber);
printf("Enter 2ndnum: ");
scanf("%lf",&2ndnumber);
temp=1stnumber;
1stnumber=2ndnumber;
2ndnumber=temp;
printf("\nAfter swapping,1stnum = %.2lf\n",1stnumber);
printf("After swapping,2nd = %.2lf",2ndnumber);
return 0;
}
