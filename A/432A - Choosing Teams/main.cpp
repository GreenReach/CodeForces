#include <iostream>

using namespace std;

int main()
{
    int n,k,i,a,nr = 0;

    cin>>n>>k;

    for(i = 0; i < n; i++)
    {
        cin>>a;
        if(a + k <= 5)
            nr++;
    }

    cout<<nr / 3;
}
