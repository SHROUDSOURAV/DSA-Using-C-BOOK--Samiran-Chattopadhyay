//WAP in C to find out whether there is an element "aij" in a mxn matrice "A" of numbers such that 
//"aij" is the smallest value in the ith row and the largest value in the jth column.
#include<stdio.h>
int main()
{
    int r,c;//r = rows , c = columns
    int i,j=0,s=0;//loop variables
    int min,max,count=0;//minimum and maximum
    printf("Enter the rows : ");//row input
    scanf("%d",&r);
    printf("Enter the columns : ");//column input
    scanf("%d",&c);
    int a[r][c];
    printf("Enter Array elements :\n");//array input
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);
    }
    printf("Display:\n");//array display
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            printf("%d\t",a[i][j]);
        printf("\n");
    }
    printf("\n");
    for(i=0;i<r;i++)
    {
        min = a[i][j];
        for(j=0;j<c;j++)
        {
            if(min > a[i][j])//find minimum from ith row
            {
                min = a[i][j];
                s=j;
            }
        }
        for(j=0;j<r;j++)
        {
            count=0;
            if(min < a[j][s])//find maximum from jth column
                break;
            else
            {
                max = min;
                count+=1;
            }
        }
        if(count > 0)
            printf("Element Found = %d\n",max);
    }
    return 0;
}