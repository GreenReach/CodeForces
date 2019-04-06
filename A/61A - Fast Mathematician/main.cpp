#include <iostream>
#include<string.h>
using namespace std;

int main()
{
    int i,n;
    char s1[101],s2[101],r[101];
    cin>>s1>>s2;
    n = strlen(s1);

    for(int i = 0; i < n; i++)
        if(s1[i] == s2[i])
            r[i] = '0';
        else
            r[i] = '1';

    r[n] = '\0';
    cout<<r;
}
