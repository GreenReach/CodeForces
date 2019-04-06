#include <iostream>

using namespace std;

int main()
{
    int n,mini,h_mini,maxi,h_maxi,a,i;
    cin>>n>>h_mini;

    h_maxi = h_mini;
    mini = maxi = 0;

    for(i = 1; i < n; i++)
    {
        cin>>a;
        if(a > h_maxi)
        {
            h_maxi = a;
            maxi = i;
        }
        if(a <= h_mini)
        {
            h_mini = a;
            mini = i;
        }
    }

    int nr = maxi + n-mini-1;
    if(mini < maxi)
        nr--;
    cout<<nr;

}
