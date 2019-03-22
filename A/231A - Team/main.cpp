#include <iostream>

using namespace std;

int main()
{
    int n,nr=0,i,P,V,T;
    cin>>n;

    for( i = 0; i< n; i++)
    {
        cin>>P>>V>>T;
        if(P + V + T > 1)
            nr++;
    }

    cout<<nr;

}
