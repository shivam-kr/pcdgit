#include<stdio.h>
int reverse(int num)
{
    int temp,rev=0;
    temp=num;
    while (temp!=0)
    {
        rev=((rev*10)+(temp%10));
        temp=temp/10;
     }
    return rev;
}
int main()
{
    int x,r;
    printf("enter a number\n",x);
    scanf("%d",&x);
    r=reverse(x);
    printf("reverse of a number is %d\n",r);
    if (r==x)
    printf("%d is a palindrome\n",x);
    else
    printf("%d is not a palindrome\n",x);
    return 0;
}
