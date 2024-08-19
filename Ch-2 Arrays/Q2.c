//WAP in C to find out the determinant of a Square Matrix for 2x2
#include<stdio.h>
int main()
{
    int i,j,a[2][2];
    printf("Input Array :\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
            scanf("%d",&a[i][j]);
    }
    //matrix display
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
            printf("%d\t",a[i][j]);
        printf("\n");
    }
    printf("Determinant = %d",(a[0][0]*a[1][1])-(a[0][1]*a[1][0]));
    return 0;
}