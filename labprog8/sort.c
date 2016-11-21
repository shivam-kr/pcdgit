#include <stdio.h>
#include <string.h>
void input(int n,char a[][80])
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("enter the string\n");
        scanf("%s",a[i]);
    }
}
void sort(int n ,char a[][80])
{
    int i,j;
    char temp[80];
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if (strcmp(a[j],a[j+1])>0)
            {
                strcpy(temp,a[j]);
                strcpy(a[j],a[j+1]);
                strcpy(a[j+1],temp);
            }
        }
    }
}
void output(int n,char a[][80])
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%s\n",a[i]);
    }

}
int search(int n,char a[][80],char *key)
{
    int low=0;
    int high=n-1;
    int mid;
    int t;
    while(low<=high)
    {
        mid=(low+high)/2;
        t=(strcmp(a[mid],key));
        if (t<0)
        {
            low=mid+1;
        }
        else if(t>0)
        {
            high=mid-1;
        }
            high=(mid-1);
        }
        else
        {
            return mid;
        }
    }
    return -1;
}
int main()
{
    int n;int b;
    char a[100][80];
    char key[80];
    printf("enter the no.of strings\n");
    scanf("%d",&n);
    input(n,a);
    sort(n,a);
    output(n,a);
    printf("enter the string to be found\n");
    scanf("%s",key);
    b=search(n,a,key);
    if(b<0)
    {
        printf("not found\n");
    }
    else
    {
        printf("found at %d",b);
    }
    return 0;

}












