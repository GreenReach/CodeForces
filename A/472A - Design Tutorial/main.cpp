#include <iostream>
#include<math.h>
using namespace std;

bool isPrime(long long int n)
{
    if (n == 1)
        return false;

    int i = 2;
    while (i*i <= n)
    {
        if (n % i == 0)
            return false;

        i += 1;
    }
    return true;
}

int main()
{
    long long int n,i,j;
    cin>>n;

    for(i = 4; i < n; i++)
        for(j = i + 1; j < n; j++)
            if(i+j == n)
                if(!isPrime(i) && !isPrime(j))
                {
                    cout<<i<<" "<<j;
                    return 0;
                }

}
