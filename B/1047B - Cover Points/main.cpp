#include <iostream>

using namespace std;

int main()
{
    int n,x,y,i,nr=0;
    cin>>n;

    for(i=0; i<n; i++)
    {
        cin>>x>>y;
        if(nr < x+y)
            nr = x+y;
    }

    cout<<nr;



}
