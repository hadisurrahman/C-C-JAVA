#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int ch[100],carry,result[3],i=0;
    int num1[3]={5,5,3};
    int num2[3]={0,9,8};
    carry=0;
    for(int i=0;i<100;i++)
    {
        result[i]=(carry+num1[i]+num2[i])%10;
        carry=(carry+num1[i]+num2[i])/10;
    }
    result[i]=carry;
    cout<<carry;
    return 0;
}
