#include <iostream>
#include<algorithm>
using namespace std;



int main()
{
    int n,m,nr,i,poz,*worms;

    cin>>n;
    worms = new int[n+1];
    worms[0] = 0;
    for(i = 1; i <= n; i++)
    {
        int a;

        cin>>a;
        worms[i] = a + worms[i-1];
    }

    cin>>m;
    for(i = 0; i < m; i++)
    {
        cin>>poz;
        cout<<lower_bound(worms, worms + n, poz) - worms<<endl;
    }
}
