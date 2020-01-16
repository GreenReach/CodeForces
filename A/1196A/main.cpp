#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    long long q,v[3],i,a,b;
    cin>>q;

    for(i=0;i<q;i++)
    {
        cin>>v[0]>>v[1]>>v[2];
        sort(v,v+3);

        a = v[0];
        b = v[1];
        a += min(v[1]-v[0],v[2]);
        v[2] -= min(v[1]-v[0],v[2]);
        a+= v[2] /2;
        b+= v[2] /2;

        cout<<min(a,b)<<endl;
    }
    return 0;
}
