#include<stdio.h>
void input(int n,float a[])
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("a[%d]: \n",i);
        scanf("%f",&a[i]);
    }
}
float horner(int n,float a[n],float x)
{
    float z=0;
    int i;
    for(i=n;i>=0;i--)
    {
        z=((z*x)+a[i]);
    }
    return z;
}
int main()
{
    int n;
    float x;
    printf("enter the value of n\n");
    scanf("%d",&n);
    float a[n];
    printf("enter the value of x\n");
    scanf("%f",&x);
    input(n,a);
    float r=horner(n,a,x);
    printf("sum is %f",r);
    return 0;
}
