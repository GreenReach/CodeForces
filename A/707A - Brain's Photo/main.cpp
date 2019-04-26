#include <iostream>

using namespace std;

int main()
{
    int n,m,i,j;
    char c;
    cin>>n>>m;

    for(i = 0; i < n; i++)
        for(j = 0; j < m; j++)
        {
            cin>>c;
            if(c != 'B' && c != 'W' && c != 'G')
            {
                cout<<"#Color";
                return 0;
            }
        }

    cout<<"#Black&White";
}
