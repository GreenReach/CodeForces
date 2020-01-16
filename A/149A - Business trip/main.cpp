#include <iostream>
#include<algorithm>
using namespace std;

bool cmp( const int& a, const int& b)
{
    return a>b;
}


int main()
{
    int v[12],n,i,nr = 0;
    cin>>n;

    for(i = 0; i < 12; i++)
        cin>>v[i];

    sort(v, v + 12, cmp);

    i = 0;
    while(nr < n && i < 12)
    {
        nr += v[i];
        i++;
    }

    if( nr < n)
        cout<<-1;
    else
        cout<<i;
}
