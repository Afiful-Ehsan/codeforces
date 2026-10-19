#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    char s,q;
    cin>>a>>s>>b>>q>>c;
    int d=a+b;
    int e=a-b;
    int f=a*b;
    if(s=='+')
    {
        if(d==c)
        {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<d<<endl;
    }
    }
    else if(s=='-')
    {
        if(e==c)
        {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<e<<endl;
    }
    }
    else if(s=='*')
    {
        if(f==c)
        {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<f<<endl;
    }
    }

    
  return 0;
}