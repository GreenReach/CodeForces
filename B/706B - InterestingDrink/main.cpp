#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int *v,n,q,i,j,k,nr,mid;
    cin>>n;
    v = new int[n];

    for(i = 0; i < n; i++)
        cin>>v[i];
    sort(v,v+n);

    cin>>q;
    for(k = 0; k < q; k++)
    {
        cin>>nr;
        cout<<upper_bound(v, v+n, nr) - v<<endl;
    }
}
