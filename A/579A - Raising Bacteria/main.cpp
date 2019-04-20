#include <iostream>

using namespace std;

int main()
{
    int n,nr = 0;
    cin>>n;
    while(n > 0)
    {
        if(n % 2 == 1)
            nr++;
        n = n >> 1;
    }
    cout<<nr;
}
