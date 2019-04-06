#include <iostream>

using namespace std;

int main()
{
    int n,a,b,nr = 0;

    cin>>n>>a;

    for(int i=1; i<n; i++)
    {
        cin>>b;
        if(b != a)
            nr++;

        a = b;
    }

    nr++;
    cout<<nr;
}
