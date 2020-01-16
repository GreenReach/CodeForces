#include <iostream>
#include<vector>
#include<string>
#include<map>
#include<string.h>
using namespace std;

int main()
{
    int m,n,i;
    map<string,string> dict;
    vector<string> lecture;
    string a,b,word;

    cin>>n>>m;

    for(i = 0; i < m; i++)
    {
        cin>>a>>b;
        dict[a] = b;
    }

    for(i = 0; i < n; i++)
    {
        cin>>word;
        b = dict[word];
        if( b.length() < word.length())
            cout<<b<<" ";
        else
            cout<<word<<" ";
    }

}
