#include<stdio.h>
#include<conio.h>

void main()
{
    int a[10],i,n;

    printf("\nEnter size of array");

    scanf("%d",&n);

    printf("\nEnter the elements of array\n");

    for(i = 0; i < n; i++)

        scanf("%d",&a[i]);

    printf("\nArray traversal\n");

    for(i = 0; i < n; i++)

        printf("%d ",a[i]);
}
