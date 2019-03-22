#include <iostream>
#include<string.h>
using namespace std;

int main()
{
  int n,i;
  char v[100];

  cin>>n;

  for(i=0;i<n;i++)
  {
      cin>>v;
      if(strlen(v)<=10)
        cout<<v<<endl;
      else
        cout<<v[0]<<strlen(v) - 2 << v[strlen(v) - 1 ]<<endl;
  }
}
