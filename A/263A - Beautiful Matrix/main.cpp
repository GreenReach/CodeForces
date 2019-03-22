#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int i,n,m,a=0;

    for( i = 0; i < 25; i++)
    {
        cin>>a;
        if( a == 1)
        {
            n = i % 5;
            m = i / 5;
        }
    }

    cout<<abs(2-n)+abs(2-m);
}
