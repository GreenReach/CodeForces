#include <iostream>
#include<string.h>
using namespace std;

int main()
{
    char s[100],current;
    int i,nr;

    cin>>s;

    current = s[0];
    nr=1;

    for(i = 1; i< strlen(s); i++)
    {
        if(s[i] == current)
        {
            nr++;
            if( nr == 7)
                {
                    cout<<"YES";
                    return 0;
                }
        }
        else
        {
            nr = 1;
            current = s[i];
        }
    }

    cout<<"NO";

}
