#include <iostream>
#include<cmath>
using namespace std;

int main()
{
   int n,m,a,b;
   cin>>n>>m>>a>>b;
   cout<<min( min( n*a , (n/m)*b+(n%m)*a ) , (n/m+1)*b );
}
