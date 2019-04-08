#include <iostream>

using namespace std;

int main()
{

    int a,b,c,nr = 0,remaining = 0;
    cin>>a>>b;

    while(a != 0)
    {
        nr += a;
        c = (a + remaining) / b;
        remaining = (a + remaining) % b;
        a = c;
    }
    cout<<nr;
}
