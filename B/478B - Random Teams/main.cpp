#include <iostream>

using namespace std;

int main()
{
    long long n,m,kmin,kmax;
    cin>>n>>m;

    if(m==1)
    {
        kmin = kmax = n*(n-1)/2;
        cout<<kmin<<" "<<kmax;
    }
    else
    {
        kmax = (n-m+1)*(n-m)/2;
        kmin = m * (((n/m) * (n/m-1))/2) + (n%m)*(n/m);
        cout<<kmin<<" "<<kmax;
    }

    return 0;
}
//n * n-1 /2

//10 3
//1111 111 1111
