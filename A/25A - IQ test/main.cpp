#include <iostream>

using namespace std;

int main()
{
    int n,even = 0,odd = 0,e,o,i,a;
    cin>>n;

    for(i=1; i<=n; i++)
    {
        cin>>a;
        if( a % 2 == 0)
            {
                even++;
                if(even == 1)
                    e = i;
            }
        else
           {
                odd++;
                if(odd == 1)
                    o = i;
            }
    }


    if( odd == 1)
        cout<<o;
    else
        cout<<e;
}
