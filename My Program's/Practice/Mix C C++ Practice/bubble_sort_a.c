#include <stdio.h>
int main()
{
    int data[100],i,n=3,j,temp;
    for(i=0;i<n;i++)
    {
        printf("%d. Enter element: ",i);
        scanf("%d",&data[i]);
    }

    for(j=0;j<n-1;j++)
    for(i=0;i<n-j-1;i++)
    {
        if(data[i]>data[i+1])
        {
            temp=data[i];
            data[i]=data[i+1];
            data[i+1]=temp;
        }
    }
    printf("by bubble sort: ");
    for(i=0;i<n;i++)
         printf("%d  ",data[i]);
    return 0;
}
