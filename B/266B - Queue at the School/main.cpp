#include <iostream>

using namespace std;

int main()
{
    char *v;
    int n,t,i,j;

    cin>>n>>t;
    v= new char[n];
    cin>>v;

    for( i = 0; i < t; i++)
    {
        for( j = 0; j < n-1; j++)
            if(v[j] == 'B' && v[j+1] == 'G')
            {
                swap(v[j],v[j+1]);
                j++;
            }

    }

    cout<<v;
}
