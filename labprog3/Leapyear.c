#include<stdio.h>
int leapyear(int year)
{
    {
    if(((year%4==0)&&(year%100!=0))||(year%400==0))
    return 1;
    else
    return 0;
    }
}
int main()
{
    int year,b;
    printf("enter the year\n");
    scanf("%d",&year);
    b=leapyear(year);
    if(b==1)
    {
        printf("it is a leap year\n",year);
    }
    else
    {
        printf("it is not a leap year\n",year);
    }
    return 0;
}
