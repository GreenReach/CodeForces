#include <iostream>

using namespace std;

int main()
{
    int n,a,s[101],i;

    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>a;
        s[a]=i;
    }

    for(i=1; i<=n; i++)
        cout<<s[i]<<" ";
}
