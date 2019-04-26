#include <iostream>
#include<string>
#include<stdlib.h>
using namespace std;

int main()
{
    int n,i,a,b,nr = 0;
    string curent,finale;
    cin>>n>>curent>>finale;

    for(i = 0; i < n; i++)
    {
        a = curent[i] - '0';
        b = finale[i] - '0';

        nr += min( abs(a - b),min(a,b) + 1 + 9 - max(a,b));
    }

    cout<<nr;
}
