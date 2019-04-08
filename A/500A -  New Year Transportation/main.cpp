#include <iostream>

using namespace std;

int main()
{
    int n,t,i,a,curent = 1;
    cin>>n>>t;

    for(i = 1; i <= n; i++)
    {
        cin>>a;

        if(i == curent)
            if(i == t)
            {
                cout<<"YES";
                return 0;
            }
            else
            {
                curent+=a;
            }

        if(curent>t)
        {
            cout<<"NO";
            return 0;
        }
    }

}
