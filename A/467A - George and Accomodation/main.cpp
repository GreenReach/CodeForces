#include <iostream>

using namespace std;

int main()
{
    int n,i,curent,total,nr=0;
    cin>>n;

    for(i = 0 ; i < n; i++)
    {
        cin>>curent>>total;

        if(total - curent >= 2)
            nr++;
    }

    cout<<nr;
}
