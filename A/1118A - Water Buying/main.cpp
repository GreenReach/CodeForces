#include <iostream>

using namespace std;

int main()
{
    long long q,n,a,b,i;
    cin>>q;

    for(i = 0; i < q; i++)
    {
        cin>>n>>a>>b;
        cout<<min( a * n,(n / 2) * b + (n%2 == 1? a:0))<<endl;

    }
}
