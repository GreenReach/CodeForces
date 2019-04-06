#include <iostream>
#include<string>
#include<ctype.h>
using namespace std;

int main()
{
   string v,s;
   int n,i;

   cin>>n;
   if(n < 26)
    {
        cout<<"NO";
        return 0;
    }

    cin>>v;
    for(i = 0;i < n;i++)
    {
        v[i] = tolower(v[i]);
        if(s.find(v[i]) == string::npos)
            s += v[i];
    }

    if(s.size() == 26)
        cout<<"YES";
    else
        cout<<"NO";
}
