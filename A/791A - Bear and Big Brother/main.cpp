#include <iostream>

using namespace std;

int main()
{
    int a,b,i = 0;
    cin>>a>>b;

    while(a <= b)
    {
        i++;
        a *= 3;
        b *= 2;
    }

    cout<<i;
}
