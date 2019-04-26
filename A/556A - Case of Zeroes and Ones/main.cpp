#include <iostream>
#include<string>
using namespace std;

int main()
{
    int n,i, o = 0, l = 0;
    string s;
    cin>>n;
    cin>>s;

    for(i = 0; i < s.size(); i++)
    {
        if(s[i] == '0')
            o++;
        else
            l++;
    }

    cout<<max(o, l) - min(o, l);

}
