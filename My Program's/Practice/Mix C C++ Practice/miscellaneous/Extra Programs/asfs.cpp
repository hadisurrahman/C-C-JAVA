#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
main()
{
    char a[200][200];
    int s,l,p=0,max=0;
    while(gets(a[p]))
        p++;
    for(int i=0;i<p;i++)
    {
        s=strlen(a[i]);
        if(s>max)
        {
            max=s;
        }
        for(int j=s;j<100;j++)
        {
            a[i][j]=' ';
        }
        a[i][100]='\0';
    }
    for(int i=0;i<max;i++)
    {
        for(int j=p-1;j>=0;j--)
        {
            printf("%c",a[j][i]);
        }
        cout<<"\n";
    }

}
