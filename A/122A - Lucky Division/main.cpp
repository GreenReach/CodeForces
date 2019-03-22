#include <iostream>

using namespace std;

int main()
{
    int n,i;
    int v[14] = { 4,7,44,47,74,77,444,447,474,744,777,774,747,477};
    cin>>n;

    for( i = 0; i < 14; i++)
        if(n % v[i] == 0)
        {
            cout<<"YES";
            return 0;
        }

    cout<<"NO";


}
