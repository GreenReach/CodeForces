#include <iostream>
#include<string.h>

using namespace std;

int main()
{
    char s1[101],s2[101];
    int i;

    cin>>s1>>s2;

    strrev(s2);

    if( strcmp(s1,s2) == 0)
        cout<<"YES";
    else
        cout<<"NO";

}
