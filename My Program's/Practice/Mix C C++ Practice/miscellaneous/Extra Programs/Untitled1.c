#include<iostream>
#include<stdio.h>

using namespace std;
main()
{
    int LA[100],K=1,N=4,ITEM;//K=POSITION
    LA[K]=ITEM;
    for(int i=0;i<=3;i++)
    {
        cin>>LA[i];
    }

    for(int J=K ; J<N-1; J++)
    {
        LA[J]=LA[J+1];

    }
    cout<<"DELETE ITEM:";
    N=N-1;
    for(int P=0;P<=3;P++)
    {
        cout<<"\n"<<LA[P];
    }


}


