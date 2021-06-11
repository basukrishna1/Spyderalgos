#include <iostream>
#include<cstring>
using namespace std;

int name(string s,int k)
{
  int i=0,c=0;
  int t=k;
  int n=t/2;
  while(n!=t)
  {
      if(s[i]!=s[n])       //checking element from starting with middle of the element
        {
            c++;
            break;
        }
      i++;
      n++;
  }
  if(c!=0)
    return 0;
  else
    return 1;

}
int main()
{
  int count=0,p,q,i,t;
  cin>>i;
  string a;
  cin>>a;
  q=a.size();
  t=q;
  if(q==1)
    {
    cout<<0;
    return 0;
    }
  p=name(a,q);
  for(int i=0;i<t;i++)
  {
  if(p==1)
    {
        count++;
        q=q/2;
        int z=q;
        if(z==1)
            break;
        else
        p=name(a,z);

    }
    else
        break;
  }
    cout<<count;
 return 0;
}
