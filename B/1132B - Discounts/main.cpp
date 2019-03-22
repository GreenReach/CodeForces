#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool cmp( long long x, long long y)
{
    return x>y;
}

int main()
{
    long long n,*v,m,*c,i,nr = 0;

    cin>>n;
    v = new long long[n];
    for(i = 0; i < n; i++)
        cin>>v[i];

    cin>>m;
    c = new long long[m];
    for(i = 0; i < m; i++)
        cin>>c[i];


    for(i=0; i<n; i++)
        nr+=v[i];

    sort(v,v+n,cmp);
    for(i=0; i<m; i++)
    {
        cout<<nr-v[c[i]-1]<<endl;
    }



}
