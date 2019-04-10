#include <iostream>
#include<string>
using namespace std;

int main()
{
    string s,a,v;
    int i,poz;
    cin>>s>>a>>v;
    s += a;

    for(i = 0; i < s.size(); i++)
    {
        poz =  v.find(s[i]);
        if(poz == string::npos)
        {
            cout<<"NO";
            return 0;
        }

        v.erase(poz,1);
    }

    if(v.size() == 0)
        cout<<"YES";
    else
        cout<<"NO";
}
