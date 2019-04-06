#include <iostream>

using namespace std;

int main()
{
    int n,nr=0;
    char *s;
    cin>>n;

    s = new char[n];
    cin>>s;

    for(int i=0; i<n; i++)
        if(s[i] == 'A')
            nr++;
        else
            nr--;

    if(nr > 0)
        cout<<"Anton";
    else if(nr < 0)
        cout<<"Danik";
    else
        cout<<"Friendship";
}
