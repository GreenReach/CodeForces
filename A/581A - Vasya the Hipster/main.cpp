#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<min(a,b)<<" "<<(int)abs(a-b) / 2;
}
