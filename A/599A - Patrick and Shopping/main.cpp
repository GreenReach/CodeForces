#include <iostream>

using namespace std;

int main()
{
    long long d1,d2,d3;
    cin>>d1>>d2>>d3;
    cout<<min(d1 + d3 + d2,
          min(d1 + d1 + d2 + d2,
          min(d1 + d3 + d3 + d1, d2 + d3 + d3 + d2)));
}
