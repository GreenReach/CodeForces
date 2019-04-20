#include <iostream>

using namespace std;


int main()
{

    int n,i,j,v[10][10];
    cin>>n;

    for(i = 0; i < n; i++)
        v[i][0] = v[0][i] = 1;

    for(i = 1; i < n; i++)
        for(j = 1; j < n; j++)
            v[i][j] = v[i-1][j] + v[i][j-1];

    cout<<v[n-1][n-1];
}
