#include <iostream>
#include<string.h>
using namespace std;

int main()
{
    char v[100],s[100];
    int i,j,ok;
    cin>>v;

    for( i = 0; i< strlen(v); i++)
    {
        ok = 0;

        for(j = 0; j < strlen(s); j++)
        {
            if(v[i]==s[j])
                ok=1;
        }

        if(ok == 0)
        {
            s[strlen(s)] = v[i];
            s[strlen(s)+1] = '\0';
        }
    }

    if(strlen(s) % 2 == 0)
        cout<<"CHAT WITH HER!";
    else
        cout<<"IGNORE HIM!";

}
