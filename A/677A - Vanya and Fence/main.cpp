#include <iostream>

using namespace std;

int main()
{
    int n,h,i,a,nr=0;

    cin>>n>>h;

    for(i = 0; i < n; i++)
    {
        cin>>a;

        if(a <= h)
            nr++;
        else
            nr += 2;
    }

    cout<<nr;
}
