#include <stdio.h>
int main()
{
    int data[100],i,n=3,j,temp;//i=for use loop//
    //n=how much number do u want to sort.//
    //temp=for swap the number //

    for(i=0;i<n;i++)//it,s for input numbers//
    {
        printf("%d. Enter element: ",i);
        scanf("%d",&data[i]);
    }
//Starting  algorithm from here//

    for(j=1;j<n;j++)
    for(i=0;i<n-1;i++)
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
    for(i=0;i<n;i++)
         printf("%d  ",data[i]);
    return 0;
}
