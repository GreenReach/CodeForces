#include <iostream>
#include<string.h>
using namespace std;

int main()
{
    int n,i,nr=0;;
    char v[50];

    cin>>n>>v;

    for(i = 0; i < strlen(v) - 1; i++)
    {
        if(strlen(v)>1)
            if(v[i]==v[i+1])
            {
                strcpy(v+i,v+i+1);
                i--;
                nr++;
            }
    }

    cout<<nr;

}
