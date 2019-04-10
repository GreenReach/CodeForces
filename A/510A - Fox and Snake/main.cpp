#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n,m,i,ok = 0;
    string full,left,right;
    cin>>n>>m;

    for(i = 0; i < m; i++)
    {
        full += "#";

        if(i == 0)
            right += "#";
        else
            right += ".";

        if(i == m-1)
            left += "#";
        else
            left += ".";
    }

    for(i = 0; i < n; i++)
    {
        if(i % 2 == 0)
            cout<<full<<endl;
        else
        {
            if(ok == 0)
            {
                cout<<left<<endl;
                ok = 1;
            }
            else
            {
                cout<<right<<endl;
                ok = 0;
            }
        }

    }
}
