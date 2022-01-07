#include <bits/stdc++.h>
using namespace std;
int fac(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int nCr(int n, int r)
{
    int ans=1;
    
    
  int numerator = fac(n);
  int denoma=fac(r)*fac(n-r);
  return numerator/denoma;

  
 
}
int main(){
    int a, b;
    cin >> a >> b;
    int s = nCr(a, b);
    cout << s;
}