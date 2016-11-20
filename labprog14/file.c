#include <stdio.h>
#include <math.h>
float sum(int n,float a[])
{
    int i;
    float s=0;
    for(i=0;i<n;i++)
    {
        s=s+(*(a+i));
    }
    return s;

}
float mean(int n,float a[])
{
    int i;
    float r;
    r=sum(n,a);
    return r/n;
}
float sd(int n,float a[])
{
    int i;
    float sum=0;
    float b=mean(n,a);
    for(i=0;i<n;i++)
    {
        sum=sum+(((*(a+i)-b)*(*(a+i)-b))/n);
    }
    return sqrt(sum);
}
int main()
{
    int n,i;
    printf("enter the no. of elements " );
    scanf("%d",&n);
    float a[n];
    printf("enter the elements\n");
    for(i=0;i<n;i++)
        scanf("%f",&a[i]);
    printf("the sum is %f\n",sum(n,a));
    printf("the mean is %f\n",mean(n,a));
    printf("the standard deviation is %f\n",sd(n,a));
    return 0;
}













