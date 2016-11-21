#include<stdio.h>
void input(int m,int n,int a[m][n])
{
    int i,j;
    printf("enter the matrix a(m*n)\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
}
void output(int x,int y,int z[x][y])
{
    int i;
    int j;
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
          printf("%d\t",z[i][j]);
        }
        printf("\n");
    }
}
void matrix(int m,int n,int a[m][n],int p,int q,int b[p][q],int c[m][q])
{
    int j,i,k;
    for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
        {
            c[i][j]=0;
            for(k=0;k<n;k++)
            {
                c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
            }
        }
    }
}
int main()
{
    int m,n,p,q;
    printf("enter the order of matrix a(m*n)");
    scanf("%d%d",&m,&n);
    printf("enter the order of matrix b(p*q)");
    scanf("%d%d",&p,&q);
    int a[m][n],b[p][q],c[m][q];
    if(n!=q)
    {
        printf("shit multiplication");
    }
    else
    {
        input(m,n,a);
        output(m,n,a);
        input(p,q,b);
        output(p,q,b);
        matrix(m,n,a,p,q,b,c);
    }
    printf("the resultant matrix is...... ");
    output(m,q,c);
    return 0;
}





















