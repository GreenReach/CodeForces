#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool cmp(pair<int,int> a, pair<int,int> b)
{
    return (a.first<b.first);
}

int main()
{
    int s,n,i,a,b;
    vector< pair<int,int> > v;
    cin>>s>>n;

    for(i = 0; i < n; i++)
    {
        cin>>a>>b;
        v.push_back( make_pair(a,b));
    }

    sort(v.begin(),v.end(),cmp);

    for(i = 0; i < n; i++)
    {
        if(v[i].first >= s)
        {
            cout<<"NO";
            return 0;
        }
        s += v[i].second;
    }

    cout<<"YES";

}
