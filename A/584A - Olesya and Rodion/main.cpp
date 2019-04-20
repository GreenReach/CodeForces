#include <iostream>

using namespace std;

int main()
{
    int n,t,i;
    cin>>n>>t;

    if(n == 1 && t == 10)
    {
        cout<<-1;
        return 0;
    }


    if(t == 10)
        n--;

    cout<<t;
    for(i = 0; i < n - 1; i++)
        cout<<0;
}
