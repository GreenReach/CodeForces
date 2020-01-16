#include <iostream>

using namespace std;

int main()
{
    int n,i,nr = 0;
    cin>>n;
    for(i = 1; i <= n-1; i++)
        if(n % i == 0)
            nr++;
    cout<<nr;

}
