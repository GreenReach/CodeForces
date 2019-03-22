#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int n,i,a,nr;
    float s[5];
    s[1] = s[2] = s[3] = s[4] = 0;
    nr = 0;

    cin>>n;

    for( i = 0; i < n; i++)
    {
        cin>>a;
        s[a]++;
    }

    if((int)s[2] % 2 == 1 )
        if( s[1] >= 2 )
            s[1] -= 2;
        else
            s[1] = 0;


    if(s[3] >= s[1])
        s[1] = 0;
    else
        s[1] -= s[3];

    nr = ceil(s[2] / 2) + s[4] + s[3] + ceil(s[1] / 4);

    cout<<nr;
}
