#include <iostream>

using namespace std;

long long int v[100001],maxi[100001];

int main()
{
    long long int i,n,a;
    cin>>n;

    for(i = 0; i < n; i++)
    {
        cin>>a;
        v[a]++;
    }

    maxi[0] = v[0];
    maxi[1] = v[1];

    for(i = 2; i < 100001; i++)
        maxi[i] = max(maxi[i-1],maxi[i-2] + i * v[i]);

    cout<<maxi[100000];

}
