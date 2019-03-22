#include <iostream>
#include<string.h>

using namespace std;

int main()
{
    char v[100],s[]="hello";
    int i,j;
    cin>>v;

    j=0;
    for(i = 0; i< strlen(v); i++)
    {
        if(v[i] == s[j])
        {
            j++;

            if(j == strlen(s))
            {
                cout<<"YES";
                return 0;
            }
        }
    }

    cout<<"NO";
}
