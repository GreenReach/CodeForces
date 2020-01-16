#include <iostream>

using namespace std;

int main()
{
    int k2, k3, k5, k6, nr;

    cin>>k2>>k3>>k5>>k6;

    nr = min(k2,min(k5, k6));
    k2 -= nr;

    cout<<nr * 256 + min(k2,k3) * 32;
}
