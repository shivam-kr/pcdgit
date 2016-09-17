#include <stdio.h>
#include <math.h>
float squareroot(float x)
{
    float r1,r2,error;
    r1=1;
    r2=x/r1;
    error=0.000001;
    while(fabs(r1-r2)>0.000001)
    {
        r1=(r1+r2)/2;
        r2=x/r1;
    }
    return r1;
}
int main()
{
    float a,x;
    printf("enter a number");
    scanf("%f",&x);
    a=sqrt(x);
    printf("%f is the sqrt of the number",a);
    return 0;
}

