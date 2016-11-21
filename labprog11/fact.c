#include <stdio.h>
int fact(int num)
{
    int i;int fact=1;
    if(num==0)
    {
        fact=1;
    }
    else
    {
        for(i=num;i>0;i--)
        {
            fact=(fact*i);
        }
    }
    return fact;
}
float binomail(int n,int r)
{
    return fact(n)/((fact(n-r))*(fact(r)));
}
int main()
{
    int n,r;
    printf("enter the value of n and r\n");
    scanf("%d%d",&n,&r);
    printf("factorial is %d",fact(n));
    printf("binomail is %f",binomail(n,r));
    return 0;
}


