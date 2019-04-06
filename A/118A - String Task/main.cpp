#include <iostream>
#include <string.h>
#include<ctype.h>
using namespace std;

int main()
{
    int i,j;
    char v[200];
    cin>>v;

    for(i=0; i<strlen(v); i++)
    {
        if(strchr("AEIOUYaeiouy",v[i]))
        {
            strcpy(v+i,v+i+1);
            i--;
        }
        else
        {
            if( isupper(v[i]))
                v[i]=tolower(v[i]);

            v[strlen(v)+1]='\0';
            for(j=strlen(v); j>i; j--)
                v[j]=v[j-1];
            v[i]='.';
            i++;


        }

    }


    cout<<v;

}
