#include <iostream>
#include <string>
#include<cstring>
using namespace std;

//function to add string
string addBinary(string a, string b)
{
    string result = "";
    int s = 0;

    int i = a.size() - 1, j = b.size() - 1;
    while (i >= 0 || j >= 0 || s == 1)
    {
        s += ((i >= 0)? a[i] - '0': 0);
        s += ((j >= 0)? b[j] - '0': 0);

        result = char(s % 2 + '0') + result;

        s /= 2;

        i--; j--;
    }
    return result;
}
string compliment(string l)     //function to find the compliment of the number
{
    int i,j;
    j=l.size();
    for(i=0;i<j;i++)
    {
        if(l[i]=='1')
            l[i]='0';
        else
            l[i]='1';
    }
    return l;
}
int main()
{
    int i;
    cin>>i;
    string c,a,b,e,f,g,z;
    cin>>c;
    string q="1";
    if(c==q || c=="0")
    {
      cout<<-1;
      return 0;
    }
    a=addBinary(c,q);                //to find (p-1) find the 2s compliment again compliment the 2s compliment and then add 1
    b=compliment(c);
    e=addBinary(b,q);
    g=addBinary(e,q);
    f=compliment(g);
    z=addBinary(f,q);
    if(a.size()!=i || z.size()<i || z[0]=='0')
        cout<<-1;
    else
        cout<<z<<" "<<a;

    return 0;
}
