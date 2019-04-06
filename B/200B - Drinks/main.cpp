#include <iostream>

using namespace std;

int main()
{
    int n,i;
    double x=0,nr,a;
    cin>>n;

    for(i=0; i<n; i++)
    {
        cin>>a;
        x+=a;
    }

    nr=x/n;
    cout<<nr;
}
