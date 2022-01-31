// Keep Multiplying Found Values by Two
// Input: nums = [5,3,6,1,12], original = 3
// Output: 24
// Explanation: 
// - 3 is found in nums. 3 is multiplied by 2 to obtain 6.
// - 6 is found in nums. 6 is multiplied by 2 to obtain 12.
// - 12 is found in nums. 12 is multiplied by 2 to obtain 24.
// - 24 is not found in nums. Thus, 24 is returned.
#include<bits/stdc++.h>
using namespace std;
int Mul(int arr[],int size,int key)
{ int flag=-1;
    for(int i=0;i<size;i++)
    {
        if(arr[i]==key)
        {
            key=key*2;
            flag=1;
        }
        
    }
    if(flag==1)
    {
           return key;
    }
    else{
        return-1;
    }





}
int main()
{
    int n;
    cout<<"enter a array size ";
    cin>>n;
      int key;
      cout<<"enter a original ";
    cin>>key;

    int arr[n];
    cout<<"enter a array element ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
  
    cout<<Mul(arr,n,key);
}