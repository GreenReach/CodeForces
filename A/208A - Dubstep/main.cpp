#include <iostream>
#include<string>
using namespace std;

int main()
{
    int i;
    string v;
    cin>>v;

    if(v.size() <= 2)
    {
        cout<<v;
        return 0;
    }

    for(i = 0; i < v.size() - 2; i++)
    {
        if(v[i] == 'W' && v[i+1] == 'U' && v[i+2] == 'B')
            v.replace(i,3," ");
    }

    while(v[0] == ' ' && v.size() > 0)
        v.erase(0,1);

    while(v[v.size()-1] == ' ' && v.size() > 0)
        v.erase(v.size()-1,1);

    if(v.size() == 0)
        return 0;

    for(i = 0; i < v.size()-1; i++)
    {
        if(v[i] == ' ' && v[i+1] == ' ')
            v.erase(i,1);
    }

    cout<<v;
}
