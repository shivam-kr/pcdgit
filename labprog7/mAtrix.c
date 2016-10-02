#include<stdio.h>
int main()
{
    int m,n,p,q,i,j,k;
    printf("enter the order of matrix A(m and n)\n");
    scanf("%d%d",&m,&n);
    printf("enter the order of natrix B(p and q)\n");
    scanf("%d%d",&p,&q);
    
    int A[m][n],B[p][q],C[m][q];
    if(n!=p)
    {
        printf("multiplication of matrix is not possible");
    }
    else
    printf("enter the element of matrix A(m and n)\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        scanf("%d",&A[i][j]);
    }
    printf("enter the element of matrix B(p and q)\n");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        scanf("%d",&B[i][j]);
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
        {
            C[i][j]=0;
            for(k=0;k<n;k++)
            {
                C[i][j]=(C[i][j])+(A[i][k]*B[k][j]);
                
            }
        }
    }
    printf("the resultant of C is...\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
        {
       printf("C[%d][%d]=%d",i,j,C[i][j]);
            printf("\n");
            }
    }
    return 0;
}
