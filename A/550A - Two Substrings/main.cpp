#include <iostream>
#include<string>
using namespace std;

int main()
{
    string s,s1;
    int i,ok = 0,poz;
    cin>>s;
    s1 =s;
    if( s.find("AB") != string::npos)
    {
        poz = s.find("AB");
        s[poz] = 'X';
        s[poz + 1] = 'X';
        if(s.find("BA") != string::npos)
            ok =1;
    }
    if( s1.find("BA") != string::npos)
    {
        poz = s1.find("BA");
        s1[poz] = 'X';
        s1[poz + 1] = 'X';
        if(s1.find("AB") != string::npos)
            ok =1;
    }

    if(ok)
        cout<<"YES";
    else
        cout<<"NO";

}
