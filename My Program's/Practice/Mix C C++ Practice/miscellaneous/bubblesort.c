#include <stdio.h>
int main()
{
    int data[100],i,n=5,j,temp;//i=for use loop//
    //n=how much number do u want to sort.//
    //temp=for swap the number //

    for(i=1;i<n;i++)//it,s for input numbers//
    {
        printf("%d. Enter element: ",i);
        scanf("%d",&data[i]);
    }
//Starting  algorithm from here//

    for(j=1;j<n-1;j++)
    for(i=1;i<n-j;i++)
    {
        if(data[i]>data[i+1])
        {
            temp=data[i];
            data[i]=data[i+1];
            data[i+1]=temp;
        }
    }
//finish algorithm here//

    printf("by bubble sort: ");// it,s use for showing output
    for(i=1;i<n;i++)
         printf("%d  ",data[i]);
    return 0;
}
