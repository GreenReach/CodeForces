#include <iostream>

using namespace std;

int main()
{
    string s;
    char curent = 'a';
    int nr = 0,i,st,dr;

    cin>>s;
    for(i=0;i<s.size();i++)
    {
        if(s[i] > curent)
        {
            dr = s[i] - curent;
            st = curent - 'a' + 'z' - s[i] + 1;
        }
        else if(s[i] < curent)
        {
            st = curent - s[i];
            dr =  s[i] - 'a' + 'z' - curent + 1;
        }
        else
        {
            st = dr = 0;
        }

        nr += min(st,dr);
        curent = s[i];
    }

    cout<<nr;

}
