#include <bits/stdc++.h>
using namespace std;
bool power_two(int);
int ans = 1;
int main()
{
int n;
cout<<"enter a number";
cin>>n;
cout<<power_two(n);
 
}
 bool power_two(int n)
 {
     if(n==0)
     {
         return 1;
     }
     for(int i=0;i<=30;i++)
     {
         if(ans==n)
         {
             return true;
         }
         ans=ans*2;
     }
     return false;
 }