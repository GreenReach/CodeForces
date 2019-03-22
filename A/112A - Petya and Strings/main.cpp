#include <iostream>
#include<ctype.h>
#include<string.h>
using namespace std;

int main()
{
    char s1[100],s2[100];
    int i;
    cin>>s1>>s2;

    for(i = 0; i < strlen(s1); i++)
    {
        if(toupper(s1[i])>toupper(s2[i]))
        {
            cout<<1;
            return 0;
        }
        else if(toupper(s1[i])<toupper(s2[i]))
        {
            cout<<-1;
            return 0;
        }
    }

    cout<<0;

}
