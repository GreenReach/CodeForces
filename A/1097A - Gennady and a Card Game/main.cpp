#include <iostream>
#include<string>
using namespace std;

int main()
{
    string s, v;
    int i;
    cin>>s;

    for(i=0; i<5; i++)
    {
        cin>>v;
        if( v[1] == s[1] or v[0] == s[0])
        {
            cout<<"YES";
            return 0;
        }
    }

    cout<<"NO";
    return 0;

}
