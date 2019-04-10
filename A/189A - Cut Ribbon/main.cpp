#include <iostream>

using namespace std;



int main()
{
    int n,a,b,c,i,v[4001];
    cin>>n>>a>>b>>c;

    for(i = 0; i < 4001; i++)
        v[i] = -1;

    v[a] = 1;
    v[b] = 1;
    v[c] = 1;

    for(i = 1; i <= n; i++)
    {

        if(i >= a && v[i-a] >= 0 )
            v[i] = max(v[i],v[i-a]+1);

        if(i >= b && v[i-b] >= 0 )
            v[i] = max(v[i],v[i-b]+1);

        if(i >= c && v[i-c] >= 0 )
            v[i] = max(v[i],v[i-c]+1);
    }
    cout<<v[n];
}
