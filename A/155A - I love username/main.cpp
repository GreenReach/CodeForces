#include <iostream>

using namespace std;

int main()
{
    int n,i,maxi,mini,a,nr = 0;
    cin>>n;
    cin>>maxi;
    mini = maxi;

    for(i = 1; i < n; i++)
    {
        cin>>a;

        if(a > maxi)
        {
            nr++;
            maxi = a;
        }
        else if(a < mini)
        {
            nr++;
            mini = a;
        }
    }

    cout<<nr;
}
