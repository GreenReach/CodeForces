#include <iostream>

using namespace std;

int main()
{
    int n,a,i,available = 0, untreated = 0;
    cin>>n;

    for(i = 0; i < n; i++)
    {
        cin>>a;
        if(a == -1)
            if(available > 0)
                available--;
            else
                untreated++;
        else
            available += a;
    }

    cout<<untreated;
}
