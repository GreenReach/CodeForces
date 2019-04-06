#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n,*v;
    cin>>n;

    v = new int[n];

    for(int i = 0; i < n; i++)
        cin>>v[i];

    sort(v,v+n);

    for(int i = 0; i < n; i++)
        cout<<v[i]<<" ";
}
