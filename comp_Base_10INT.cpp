#include <bits/stdc++.h>
using namespace std;
int Base_10INT(int);
// int main()
// {
//      int ans;
//     int mask = 0;
//     int n;
//     cout << "enter a number";
//     cin >> n;
  
//     if (n == 0)
//     {
//         cout << "1";
//     }
//     while (n != 0)
//     {
//         mask = (mask << 1) | 1;
//         n = n >> 1;
       
//     }
//     ans = (~n) & mask;
//     cout << ans;
// }
int ans;
int main()
{
    int n;
    cout<<"enter a number ";
    cin>>n;
 
    Base_10INT(n);
    cout <<ans;

}
int Base_10INT(int n)
{
   
    int m=n;
    int mask=0;
        if(m==0)
    {
        cout<<"1";
    }
    while(m!=0)
    {
        mask=(mask<<1)|1;
        m=m>>1;

    }
     ans=(~n)&mask;
     return ans;
    
}