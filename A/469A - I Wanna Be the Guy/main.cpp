#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n,p,q,*v,i,a;
    cin>>n;
    v = new int[n+1];

    for(i = 1 ;i <= n; i++)
      v[i]=0;

    cin>>p;
    for(i = 0; i < p; i++)
    {
        cin>>a;
        v[a]++;
    }

    cin>>q;
    for(i = 0; i < q; i++)
    {
        cin>>a;
        v[a]++;
    }

    for(i = 1; i <= n; i++)
        if( v[i] == 0)
        {
            cout<<"Oh, my keyboard!";
            return 0;
        }

    cout<<"I become the guy.";

}
