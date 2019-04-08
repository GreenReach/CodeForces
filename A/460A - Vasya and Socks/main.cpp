#include <iostream>

using namespace std;

int main()
{
    int n,m,i,nr = 0;
    cin>>n>>m;

    while(n != 0)
    {
        nr++;
        n--;
        if(nr%m==0)
            n++;
    }
    cout<<nr;
}
