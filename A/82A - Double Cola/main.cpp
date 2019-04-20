#include <iostream>
#include<string>
using namespace std;

int main()
{
    long long v[6];
    int n,cur = 1;
    cin>>n;

    for(int i = 1; i < 6; i++)
        v[i] = 1;

    while(n > 0)
    {
        n -= v[cur];
        v[cur] *= 2;

        if(cur == 5)
            cur = 1;
        else
            cur++;

    }

    switch(cur)
    {
    case 1:
        cout<<"Howard";
        break;
    case 2:
        cout<<"Sheldon";
        break;
    case 3:
        cout<<"Leonard";
        break;
    case 4:
        cout<<"Penny";
        break;
    case 5:
        cout<<"Rajesh";
        break;
    }

}
