#include <iostream>
#include<string>
using namespace std;

int main()
{  int i,j,n,p;
   int coun1=0;
     cin>>n;
   for(i=1;i<=n;i=i+2)
     {
         coun1++;
     }
      p=n-coun1;
  for(i=0;i<n;i++)
    cout<<"*";
    cout<<"\n";
  for(i=1; i<p; i++)
    {
    for(j=i; j<=p; j++)
     cout<<"*";
    for(j=1; j<=2*i-1; j++)
     cout<<" ";

  for(j=i; j<=p; j++)
     cout<<"*";

     cout<<"\n";
}
for(i=1; i<=p; i++)
    {
    for(j=1; j<=i; j++)
     cout<<"*";
    for(j=2*i-2; j<2*p-1; j++)
    cout<<" ";
    for(j=1; j<=i; j++)
     cout<<"*";

    cout<<"\n";
    }

for(i=0;i<n;i++)
    cout<<"*";
    return 0;
}
