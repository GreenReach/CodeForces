#include <iostream>

using namespace std;

int main()
{
    int n,x,y,z,a;
    x = y= z = 0;
    cin>>n;

    for(int i = 0; i <n; i++)
    {
        cin>>a;
        x += a;

        cin>>a;
        y += a;

        cin>>a;
        z += a;

    }

    if(x == 0 && y == 0 && x == 0)
        cout<<"YES";
    else
        cout<<"NO";
}
