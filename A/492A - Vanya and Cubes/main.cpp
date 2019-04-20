#include <iostream>

using namespace std;

int main()
{
    int n,i,h = 0, len = 0;
    cin>>n;
    for(i = 1; i <= 1000; i++)
    {
        len += i;

        if(n >= len)
        {
            n -= len;
            h++;
        }
        else
            break;
    }

    cout<<h;
}
