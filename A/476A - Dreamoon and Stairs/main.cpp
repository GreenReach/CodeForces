#include <iostream>

using namespace std;

int main()
{
    int n,m,i;
    cin>>n>>m;
    if(m > n)
    {
        cout<<-1;
        return 0;
    }

    for(i = n / 2 + n % 2; i <= n; i++)
        if(i % m == 0)
            break;

    cout<<i;
}
