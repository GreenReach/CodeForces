#include <iostream>

using namespace std;

int main()
{
    int n,k,nr,a,b,i;
    nr = 0;
    cin>>n>>k;

    for( i = 0; i < k; i++)
    {
        cin>>a;
        if(a == 0)
        {
            cout<<nr;
            return 0;
        }
        nr++;
    }

    for( i = k; i < n; i++)
    {
        cin>>b;
        if(a == b)
            nr++;
        else
        {
            cout<<nr;
            return 0;
        }
    }
    cout<<nr;

}
