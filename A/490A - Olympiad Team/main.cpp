#include <iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v[4];
    int n,i,a;

    cin>>n;

    for(i = 1; i <= n; i++)
    {
        cin>>a;
        v[a].push_back(i);
    }

    int m = min(v[1].size(), min( v[2].size(), v[3].size()));

    cout<<m<<endl;
    for(i = 0; i < m; i++)
        cout<<v[1][i]<<" "<<v[2][i]<<" "<<v[3][i]<<endl;
}
