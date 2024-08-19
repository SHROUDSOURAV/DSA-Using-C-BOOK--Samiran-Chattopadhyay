//WAP in C to find out the maximum and the second maximum values in array of integers.
#include<stdio.h>
void Selection_Sort(int a[],int n)//selection sort algorithm
{
    int i,j,min,temp;
    for(i=0;i<n;i++)
    {
        min = i;
        for(j=i+1;j<n;j++)
        {
            if(a[min] > a[j])
                min=j;
        }
        if(i != min)
        {
            temp=a[i];
            a[i]=a[min];
            a[min]=temp;
        }
    }
}
int main()
{
    int n,i,j=0;
    printf("Enter the size of Array : ");
    scanf("%d",&n);
    int a[n],b[n];
    printf("Array Input:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    Selection_Sort(a,n);
    for(i=0;i<n;i++)//delete duplicate elements
    {
        if(a[i] != a[i+1])
        {
            b[j]=a[i];
            j++;
        }
    }
    printf("Maximum = %d\n",b[j-1]);
    printf("Second Maximum = %d",b[j-2]);
    return 0;
}