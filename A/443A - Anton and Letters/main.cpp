#include <iostream>
#include<string>
using namespace std;

int main()
{
    string v,s;
    int i;

    getline(cin,v);
    if(v.size() == 2)
    {
        cout<<0;
        return 0;
    }

    for(i = 1; i < v.size()-1; i += 3)
    {
        if(s.find(v[i]) == string::npos)
            s += v[i];
    }

    cout<<s.size();
}
