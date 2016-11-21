/*sinx using taylor*/
#include<stdio.h>
#include<math.h>

float mysinx(float degree)
{
float term,x,sum;
int i;
x=(degree*(3.142/180.0));
term=x;
sum=term;
for(i=3;fabs(term)>0.0000001;i+2)
	{
	term=-term*x*x/(i*(i-1));
	sum=sum+term;
	}
return sum;
}
int main()
{
int i;
float degree,term,sum,get;
printf("enter the degree\n");
scanf("%f",&degree);
get=mysinx(degree);
printf("sin(%f)=%f\n",degree,get);
return 0;
}
