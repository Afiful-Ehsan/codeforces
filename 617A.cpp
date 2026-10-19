#include <bits/stdc++.h>
using namespace std;
int main()
{
   int x,d;
   cin>>x;
     
    if(x%5==0)
       {
         d=x/5 ;
       }
       else
       {
        d=(x/5)+1;
       }
     
     cout<<d<<endl;
    return 0;
}