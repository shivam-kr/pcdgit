#include <stdio.h>
int main()
{
    float x,z=0,a[5];
    int i;
    printf("enter the value of x\n");
    scanf("%f",&x);
    printf("enter the coefficient"); 
    for(i=0;i<=4;i++)
    {  
    printf("a[%d]= ",i);      
    scanf("%f",&a[i]);
    }
    for(i=4;i>=0;i--)
    {
        z=z*x+a[i];
    }
    printf("sum of polynomial is %f",z);
    /*printf("f(%f)=%f",x,z);*/
    return 0;
}
