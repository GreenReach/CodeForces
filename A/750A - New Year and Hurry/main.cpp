#include <iostream>

using namespace std;

int main()
{
    int n,k,i, total = 240;
    cin>>n>>k;
    total -= k;

    for(i = 1; i <= n; i++)
    {
        if(total >= i * 5)
            total -= i * 5;
        else
        {
            cout<<i - 1;
            return 0;
        }
    }
    cout<<i-1;


}
