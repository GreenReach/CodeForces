#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<bool> v;
    bool a;
    int n,i,j,s,nr = 0,maxi = 0;
    cin>>n;

    for(i = 0; i < n; i++)
    {
        cin>>a;
        v.push_back(a);

        if(a)
            nr++;
    }

    for(i = n - 1; i >= 0; i--)
    {
        s = nr;

        for(j = i; j < n; j++)
        {
            if(v[j])
                s--;
            else
                s++;
            maxi = max(s, maxi);

        }

    }

    cout<<maxi;
}
