#include <iostream>

using namespace std;

int main()
{
    int i,r,k;
    cin>>k>>r;

    for(i = 1; i < 10; i++)
    {
        int nr = k * i % 10;
        if( nr == r || nr == 0 )
        {
            cout<<i;
            return 0;
        }
    }

    cout<<10;
}
