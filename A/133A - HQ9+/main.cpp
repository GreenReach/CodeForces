#include <iostream>
#include<string.h>
using namespace std;

int main()
{
    char v[100];
    int i;
    cin>>v;

    for(i = 0; i < strlen(v); i++)
    {
        if(strchr("HQ9",v[i]) > 0)
        {
            cout<<"YES";
            return 0;
        }
    }

    cout<<"NO";
}
