#include<stdio.h>
main()
{
    int N=5,item,K=2;
    int LA[10],i,J=N;

    while(J>=K)
    {
        scanf("%d",LA[i]);

        LA[J+1]=LA[J];
        J=J-1;
         printf("%d",LA[i]);

    }
    LA[K]=item;
    N++;
    printf("%d",LA[i]);
}
