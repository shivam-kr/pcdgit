#include<stdio.h>
#include<math.h>
int main()
{
    int i;
    float term,x,sum,y;
    /*where y is the degree of sine series*/
    printf("Enter the value of y(in degree)\n");
    scanf("%f",&y);
    x=y*(3.142/180);
    printf("the value of %f in radian is %f",y,x);
    term=x;
    sum=x;
    for(i=3;fabs(term)>0.000001;i=i+2)
    {
        term=-(term*x*x)/(i*(i-1));
        sum=sum+term;
    }
    printf("result of sine series is %f",sum);
    return 0;
}
