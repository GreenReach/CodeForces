#include <iostream>
#include<string.h>
#include<ctype.h>
using namespace std;

int main()
{
    int upp=0,low=0,i;
    char s[100];

    cin>>s;

    for(i=0; i<strlen(s); i++)
        if(s[i]==toupper(s[i]))
            upp++;
        else
            low++;

    if(upp > low)
        for(i=0; i<strlen(s); i++)
            s[i] = toupper(s[i]);
    else
        for(i=0; i<strlen(s); i++)
            s[i] = tolower(s[i]);

    cout<<s;
}
