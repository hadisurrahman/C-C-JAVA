#include<stdio.h>
int main()
{
    int A[200],K=0,UB=5;

    printf("Enter the elements in array: \n");

    for(K=0;K<UB;K++)
        {

                scanf("%d",&A[K]);
        }

    printf("The Traverse of array is:\n");

    for(K=0;K<UB;K++)
    {
            printf("   :%d\n",A[K]);
    }
return 0;
}

