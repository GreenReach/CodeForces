#include <iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    int v[100001],i,n,l,r;
    cin>>s>>n;

    v[0] = 0;
    for(i = 1; i < s.size(); i++)
    {
        if(s[i] == s[i - 1])
            v[i] = v[i - 1] + 1;
        else
            v[i] = v[i - 1];
    }

    for(i = 0; i < n; i++)
    {
        cin>>l>>r;
        cout<<v[r - 1] - v[l - 1]<<endl;
    }

}
