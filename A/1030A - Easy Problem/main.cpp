#include <iostream>

using namespace std;

int main()
{
    int n,i,a;
    cin>>n;
    for(i = 0; i < n; i++)
    {
        cin>>a;
        if(a)
        {
            cout<<"HARD";
            return 0;
        }
    }

    cout<<"EASY";
}
