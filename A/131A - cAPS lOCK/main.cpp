#include <iostream>
#include<ctype.h>
#include<string.h>
using namespace std;

int main()
{
    char v[101],s[101];
    int i;

    cin>>v;

    if(v[0] == tolower(v[0]))
        s[0] = toupper(v[0]);
    else
        s[0]=tolower(v[0]);

    for(i = 1; i < strlen(v); i++)
    {
        if(toupper(v[i])!=v[i])
        {
            cout<<v;
            return 0;
        }

            s[i] = tolower(v[i]);
    }

s[i] = '\0';
cout<<s;
}
