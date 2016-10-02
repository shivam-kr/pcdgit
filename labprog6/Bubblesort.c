#include<stdio.h>
#include<math.h>
int main()
{
    int temp,a[100],n,i,j;
    printf("enter the number of element\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("a[%d]= ",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
     printf("arrange the sorted list in ascending order\n",a[i]);
    for(i=0;i<n;i++)
    printf("%d\n",a[i]);
    return 0;
}
