#include<iostream>
#include<stdio.h>
using namespace std;
main()
{
    long long int test_case, n, a, b, c,sum,i,j;
    while(scanf("%d",&test_case)==1)
    {
        for(i=1; i<= test_case; i++)
        {
            cin>>n;
            sum=0;
            for(j=1;j<=n;j++)
            {
                cin>>a>>b>>c;
                sum+=(a*c);
            }
            cout<<sum<<"\n";
        }
    }


}
