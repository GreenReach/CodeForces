#include <iostream>

using namespace std;

int main()
{
    int i,n,x,nr = 0;
    cin>>n>>x;

    for(i = 2; i <= min(n,x/2); i++)
        if(x % i == 0)
            if(x / i <= n)
            nr++;
    if(n >= x)
        nr += 2;
    if( x == 1)
    {
        cout<<1;
        return 0;
    }
    cout<<nr;
}
