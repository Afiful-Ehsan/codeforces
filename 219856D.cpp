#include <bits/stdc++.h>
using namespace std;
int main()
{
    string A;
    cin>>A;
    string B;
    cin>>B;
     cout<<A.length()<<" "<<B.length()<<endl;
    cout<<A+B<<endl;
    int temp=A[0];
    A[0]=B[0];
    B[0]=temp;
   
    cout<<A<<" "<<B<<endl;
    
    return 0;
}