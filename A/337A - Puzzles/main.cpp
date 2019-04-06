#include <iostream>
#include<algorithm>

using namespace std;

int diff(int *v,int n)
{
    int i,maxi=v[0],mini=v[0];

    for(i = 0; i < n; i++)
    {
        if(v[i] > maxi)
            maxi = v[i];

        if(v[i] < mini)
            mini = v[i];
    }

    return maxi - mini;;
}

int main()
{
    int n,m,*v,i,maxi;
    cin>>n>>m;

    v = new int[m];
    for(i = 0; i < m; i++)
        cin>>v[i];

    sort(v,v+m);
    maxi = diff(v,n);
    for( i = 1; i <= m - n ; i++)
    {
        int nr = diff(v+i,n);

        if(nr < maxi)
            maxi = nr;
    }

    cout<<maxi;
}
