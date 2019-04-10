#include <iostream>
#include<vector>
#include<string>
#include<map>
using namespace std;

int main()
{
    map< string,int > v;
    int i,j,n,nr,ok;
    string s;
    cin>>n;

    for(i = 0; i < n; i++)
    {
        ok = 0;
        cin>>s;
        if( v.find(s) == v.end())
        {
            cout<<"OK"<<endl;
            v.insert(pair<string,int>(s,1));
        }
        else
        {
            cout<<s<<v.find(s)->second<<endl;
            v.find(s)->second++;
        }


    }
}
