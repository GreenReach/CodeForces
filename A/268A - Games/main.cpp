#include <iostream>
#include<vector>
using namespace std;

int main()
{
    vector< pair<int,int> > v;
    int n,i,j,a,b,nr = 0;

    cin>>n;

    for(i = 0; i < n; i++)
    {
        cin>>a>>b;
        v.push_back( make_pair(a,b) );
    }

    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            if(i != j)
                if(v[i].first == v[j].second)
                    nr++;

    cout<<nr;
}
