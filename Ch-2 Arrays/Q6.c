//WAP in C to multiply 2 matrices and display the product 
#include<stdio.h>
#define size 30
int main()
{
    int a[size][size],b[size][size],c[size][size];
    int r1,c1,r2,c2,i,j,k;
    printf("Enter Row1 and Col1: ");
    scanf("%d,%d",&r1,&c1);
    printf("Enter Row2 and Col2: ");
    scanf("%d,%d",&r2,&c2);
    if(c1 != r2)
        printf("Multiplication not Possible\n");
    else
    {
        printf("Matrice 1 INPUT:\n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        printf("Matrice 2 INPUT:\n");
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }
        printf("Matrice 1 Display:\n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
                printf("%d\t",a[i][j]);
            printf("\n");
        }
        printf("Matrice 2 Display:\n");
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
                printf("%d\t",b[i][j]);
            printf("\n");
        }
        printf("Multiplication of 2 Matrices :\n");
        for(i=0;i<r1;i++)
        {
            c[i][j]=0;
            for(j=0;j<c2;j++)
            {
                for(k=0;k<c1;k++)//c1 and r2 same so either is ok
                {
                    c[i][j]+=a[i][k]*b[k][j];
                }
                printf("%d\t",c[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}