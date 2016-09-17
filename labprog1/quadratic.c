#include <stdio.h>
#include <math.h>
int main()
    {
    float d,a,b,c,r1,r2,rr,ir;
    printf("enter the coefficient of the quadratic equation",a,b,c);
    scanf("%f%f%f",&a,&b,&c);
    d=(b*b)-((4*a)*c);
    if (d==0)
    {
        r1=r2=(-b)/(2*a);
        printf("the roots are real and equal,r1=r2=%f\n",r1);
    }
    else
        if(d>0)
        {
        r1=((-b)+(sqrt(d)))/(2*a);
        r2=((-b)-(sqrt(d)))/(2*a);
        printf("the roots are real and distinct,r1=%f and r2%f\n",r1,r2);
        }
    else
        {
        printf("roots are imaginary");
        rr=(-b)/(2*a);
        ir=(sqrt(-d))/(2*a);
        printf("r1=%f+i%f and r2=%f-i%f\n",rr,ir,rr,ir);
        }
return 0;    
}
