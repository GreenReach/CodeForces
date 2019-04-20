#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    int a,b,n,nr,turn = 0;
    cin>>a>>b>>n;

    while(true)
    {

        if(turn == 0)
        {
            nr= __gcd(a, n);
            if(n < nr)
            {
                cout<<1;
                return 0;
            }
            n -= nr;
            turn = 1;
        }

        if(turn == 1)
        {
            nr= __gcd(b, n);
            if(n < nr)
            {
                cout<<0;
                return 0;
            }
            n -= nr;
            turn = 0;
        }
    }
}
