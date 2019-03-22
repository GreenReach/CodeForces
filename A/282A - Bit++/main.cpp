#include <iostream>

using namespace std;

int main()
{
    int n,i,x=0;
    char c;

    cin>>n;
    for( i = 0; i < n; i++)
    {
        cin>>c;
        cin>>c;
        if(c=='+')
            x++;
        else
            x--;
        cin>>c;
    }

    cout<<x;
}
