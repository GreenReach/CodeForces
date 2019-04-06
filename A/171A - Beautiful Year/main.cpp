#include <iostream>

using namespace std;

int main()
{
    int n,m;
    cin>>n;
    m = n+1;

    while(m%10 == (m/10)%10 || m%10 == (m/100)%10 || m%10 == m/1000 || (m/10)%10 == (m/100)%10 || (m/10)%10 == m/1000 || (m/100)%10 == m/1000)
        m++;

    cout<<m;

}
