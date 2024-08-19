//WAP in C to multiply two polynomials and to return the product
#include<stdio.h>
struct poly
{
    int co,p;
};
int main()
{
    int n1,n2,i,j;
    printf("Enter the terms of Poly1: ");
    scanf("%d",&n1);
    printf("Enter the terms of Poly2: ");
    scanf("%d",&n2);
    struct poly poly1[n1],poly2[n2];
    printf("INPUT POLY1 EXPRESSION\n");
    for(i=0;i<n1;i++)
    {
        printf("Enter power = ");
        scanf("%d",&poly1[i].p);
        printf("Enter cofficient = ");
        scanf("%d",&poly1[i].co);
    }
    printf("\n\n\n");
    printf("INPUT POLY2 EXPRESSION\n");
    for(i=0;i<n2;i++)
    {
        printf("Enter power = ");
        scanf("%d",&poly2[i].p);
        printf("Enter cofficient = ");
        scanf("%d",&poly2[i].co);
    }
    printf("\n\n\n");
    //display poly1
    printf("EXP 1--> ");
    for(i=0;i<n1;i++)
    {
        if(i == n1-1)
            printf("%d^%d",poly1[i].co,poly1[i].p);
        else
            printf("%d^%d+",poly1[i].co,poly1[i].p);
    }
    printf("\n");
    //display poly2
    printf("EXP 2--> ");
    for(i=0;i<n2;i++)
    {
        if(i == n2-1)
            printf("%d^%d",poly2[i].co,poly2[i].p);
        else
            printf("%d^%d+",poly2[i].co,poly2[i].p);
    }
    printf("\n");
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        {
            if(i == n1-1 && j == n2-1)
                printf("%dx^%d",(poly1[i].co*poly2[j].co),(poly1[i].p+poly2[j].p));
            else    
                printf("%dx^%d+  ",(poly1[i].co*poly2[j].co),(poly1[i].p+poly2[j].p));
        }
        printf("\n");
    }
    return 0;
}
