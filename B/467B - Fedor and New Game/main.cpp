#include <iostream>
#include <vector>
using namespace std;

int countSetBits( long long n)
{
    int counter = 0;
    while(n)
    {
        counter += n & 1;
        n >>= 1;
    }
    return counter;
}

int main()
{
    int n,m,k,i,nr = 0;
    long long fedor,x;
    vector<long long> armies;

    cin>>n>>m>>k;
    for(i = 0; i < m; i++)
    {
        cin>>x;
        armies.push_back(x);
    }
    cin>>fedor;

    for(i = 0; i < m; i++)
        if( countSetBits(armies[i] ^ fedor) <= k)
            nr++;

    cout<<nr;

}
