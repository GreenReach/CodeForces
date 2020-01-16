#include <iostream>
#include<vector>
using namespace std;

bool ok[100000];


int main()
{
    int n,m,i,x,*distinct;
    vector<int> v;

    cin>>n>>m;
    for(i = 0; i < n; i++)
    {
        cin>>x;
        v.push_back(x);
    }

    distinct = new int[n];
    distinct[n-1] = 1;
    ok[v[n-1]] = true;
    for(i = n - 2; i >= 0; i--)
    {
        if(ok[v[i]] == false)
        {
            distinct[i] = distinct[i+1] + 1;
            ok[v[i]] = true;
        }
        else
            distinct[i] = distinct[i+1];
    }

    for(i = 0; i < m; i++)
    {
        cin>>x;
        cout<<distinct[x-1]<<endl;
    }

}
