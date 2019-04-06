#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;

    if(a==1 && b!=1 && c!=1)
        cout<<(a+b)*c;

    if(a!=1 && b!=1 && c==1)
        cout<<a*(b+c);

    if(a!=1 && b==1 && c!=1)
        cout<<max((b+a)*c, (b+c)*a);

    if(a==1 && b==1 && c!=1)
        cout<<c*2;

    if(a!=1 && b==1 && c==1)
        cout<<a*2;

    if(a==1 && b!=1 && c==1)
        cout<<b+2;

    if(a==1 && b==1 && c==1)
        cout<<3;

    if(a!=1 && b!=1 && c!=1)
        cout<<a*b*c;
}
