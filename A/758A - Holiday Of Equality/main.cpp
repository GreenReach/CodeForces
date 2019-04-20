#include <iostream>

using namespace std;

int main()
{
    int n,*v,i,maxi = 0,nr = 0;
    cin>>n;
    v = new int [n];

    for(i = 0; i < n; i++)
    {
        cin>>v[i];
        maxi = max(maxi, v[i]);
    }

    for(i = 0; i < n; i++)
        nr += maxi - v[i];

    cout<<nr;
}
