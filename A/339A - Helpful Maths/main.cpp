#include <iostream>
#include<string.h>
using namespace std;

int main()
{
    char v[100];
    int a[3],i;
    a[0]=a[1]=a[2]=0;

    cin>>v;

    for(i = 0; i < strlen(v); i++)
    {
        if(v[i] == '1')
            a[0]++;
        else if(v[i] == '2')
            a[1]++;
        else
            a[2]++;
        i++;
    }

    for(i = 0; i < a[0]; i++)
    {
        cout<<1;
        if(i < a[0]-1 || (i == a[0]-1 && ( a[1]!=0 || a[2]!=0 ) ) )
            cout<<'+';
    }

    for(i = 0; i < a[1]; i++)
    {
        cout<<2;
        if(i < a[1]-1 || (i == a[1]-1 && a[2]!=0 ) )
            cout<<'+';
    }

    for(i = 0; i < a[2]; i++)
    {
        cout<<3;
        if(i < a[2]-1 )
            cout<<'+';
    }
}
