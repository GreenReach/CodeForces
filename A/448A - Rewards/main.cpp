#include <iostream>

using namespace std;

int main()
{
    int a1,a2,a3,b1,b2,b3,n;
    cin>>a1>>a2>>a3>>b1>>b2>>b3>>n;
    a1 = a1 + a2 + a3;
    b1 = b1 + b2 + b3;

    if(a1 / 5 + (a1%5!=0?1:0) + b1 / 10 + (b1%10!=0?1:0) <= n)
        cout<<"YES";
    else
        cout<<"NO";
}
