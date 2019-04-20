#include <iostream>

using namespace std;

int main()
{
   long long n,k;
   cin>>n>>k;

   while(k != 0)
   {
       if(n % 10 == 0)
       {
           k--;
           n /= 10;
       }
       else
        if(k > n % 10)
       {
           k -= n % 10;
           n -= n % 10;
       }
       else
       {
           n -= k;
           k = 0;
       }
   }

   cout<<n;
}
