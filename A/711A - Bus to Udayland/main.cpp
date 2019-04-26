#include <iostream>
#include<string>
using namespace std;

int main()
{
    int n,i,ok = 0;
    string *v;
    cin>>n;
    v = new string[n];
    for(i = 0; i < n; i++)
        cin>>v[i];

    for(i = 0; i < n; i++)
    {
        if(v[i][0] == 'O' && v[i][1] == 'O')
        {
            v[i][0] = v[i][1] = '+';
            ok = 1;
            break;

        }

        if(v[i][3] == 'O' && v[i][4] == 'O')
        {
            v[i][3] = v[i][4] = '+';
            ok = 1;
            break;
        }
    }

    if(ok == 0)
    {
        cout<<"NO";
        return 0;

    }
    cout<<"YES"<<endl;
    for(i = 0; i < n; i++)
        cout<<v[i]<<endl;
}
