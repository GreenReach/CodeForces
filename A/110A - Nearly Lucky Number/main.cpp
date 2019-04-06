#include <iostream>
#include<string.h>

using namespace std;

int main()
{
    char v[20];
    int i,nr=0;

    cin>>v;

    for(i = 0; i<strlen(v); i++ )
        if(v[i] == '4' || v[i] == '7')
            nr++;


    if( nr == 0)
    {
        cout<<"NO";
        return 0;
    }


    while( nr > 0)
    {
        if( (nr % 10) != 4 && (nr % 10) != 7)
        {
            cout<<"NO";
            return 0;
        }

        nr/=10;
    }

    cout<<"YES";
}
