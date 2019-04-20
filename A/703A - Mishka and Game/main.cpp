#include <iostream>

using namespace std;

int main()
{
    int n,m,c,i,nr = 0;
    cin>>n;

    for(i = 0; i < n; i++)
    {
        cin>>m>>c;

        if(m > c)
            nr++;
        if(c > m)
            nr--;
    }

    if(nr > 0)
        cout<<"Mishka";
    if(nr < 0)
        cout<<"Chris";
    if(nr == 0)
        cout<<"Friendship is magic!^^";

}
