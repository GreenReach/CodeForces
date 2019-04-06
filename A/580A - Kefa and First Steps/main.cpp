#include <iostream>

using namespace std;

int main()
{
    int *v,n,i,a,b,nr,maxi;
    cin>>n;

    cin>>b;
    maxi = nr = 1;
    for(i = 1; i < n; i++)
    {
        cin>>a;
        if(a >= b)
            nr++;

        else
        {
            if(nr > maxi)
                maxi = nr;

            nr = 1;
        }

        b = a;
    }

    if(nr > maxi)
        maxi = nr;

    cout<<maxi;
}
