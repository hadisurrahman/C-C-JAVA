#include<iostream>
#include<stdio.h>
using namespace std;
void traversal(int LA[],int N,int LB)
{
    int i;
    cout<<"Total Traversal:";
    for(i=LB; i<N; i++)
    {
        cout<<(LA[i])<<" ";
    }
}
int main()
{
    int LB=0,LA,N=5;
    int i;
    int array_data[10000];
    cout<<"Enter the value's of array:\n";

    for(i=0;i<N;i++)
    {
      scanf("%d",&array_data[i]);
    }
    traversal(array_data,N,LB);
    return 0;
}


