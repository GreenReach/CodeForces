#include <iostream>

using namespace std;

int main()
{
    int n,i,a;
    cin>>n;
    for(i = 0; i < n; i++)
    {
        cin>>a;
         cout<< ((360%(180-a) ==0)? "YES" : "NO" )<<endl;
    }
}

