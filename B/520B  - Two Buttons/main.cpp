#include <iostream>

using namespace std;

int main()
{
    long long n,m, nr = 0;
    cin>>n>>m;

    if(n >= m)
    {
        cout<<n - m;
        return 0;
    }

    while( n < m)
    {
        if(m % 2 == 0)
            m /= 2;
        else
            m++;
        nr++;
    }

    cout<<nr + max(n,m)-min(m,n);


}
