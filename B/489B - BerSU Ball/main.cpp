#include <iostream>
#include<algorithm>
#include<stdlib.h>
using namespace std;

int main()
{
    int n,m,*b,*g,i,j,nr = 0;

    cin>>n;
    b = new int[n];
    for(i = 0; i < n; i++)
        cin>>b[i];
    sort(b,b+n);

    cin>>m;
    g = new int[m];
    for(i = 0; i < m; i++)
        cin>>g[i];
    sort(g, g + m);

    i = j = 0;
    while(i < n && j < m)
    {
        if(abs(b[i] - g[j]) <= 1)
        {
            nr++;
            i++;
            j++;
        }

        else if(b[i] > g[j])
            j++;
        else
            i++;

        }

    cout<<nr;
}
