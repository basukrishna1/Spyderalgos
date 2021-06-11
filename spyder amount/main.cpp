#include <iostream>

using namespace std;

int main()
{
   int n,r,x,y,p;
   cin>>n;
   cin>>r;
   cin>>x;
   cin>>y;
   p=r;
   int c[n],s[n];
   for(int i=0;i<n;i++)
    cin>>c[i];
   for(int i=0;i<n;i++)
    cin>>s[i];
    for(int i=0;i<n;i++)
        if(c[i]==1)
    {
        if(s[i]==1)
            r=r+x;
        else
            r=r-y;
    }
    if(p<r)
        cout<<"promoted";
    else
        if(p>r)
        cout<<"demoted";
     else
        cout<<"no change";

    return 0;
}
