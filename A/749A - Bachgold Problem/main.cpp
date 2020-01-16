#include <iostream>

using namespace std;

int main()
{
    int n,i;
    cin>>n;
    cout<<n/2<<endl;

    for(i = 0; i < n / 2 - 1; i++)
        cout<<"2 ";

    if (n%2==0)
        cout<<2<<endl;

    else
        cout<<3<<endl;


}
