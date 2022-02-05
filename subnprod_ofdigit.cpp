#include <bits/stdc++.h>
using namespace std;
int main()

{
    int n;
    cout<<"enter a number";
    cin>>
      int sum=0;
        int prod=1;
        while(n!=0)
        {
            int digit=n%10;
            prod=prod*digit;
            sum=sum+digit;
            n=n/10;
        }
        int ans=prod-sum;
        cout<< ans;
        
    
}
