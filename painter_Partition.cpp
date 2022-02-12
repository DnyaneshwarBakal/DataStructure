#include<bits/stdc++.h>
using namespace std;
bool is_possible(int arr[],int size,int per,int mid)
{
    int per_count=1;
    int paint_part=0;
    for (int i = 0; i < size; i++)

    {
        if( arr[i]+paint_part<=mid)
        {
            paint_part+=arr[i];
        }
        else{
            per_count++;
            if(arr[i]>mid || per_count>per)
            {
                return false;
            }
            paint_part+=arr[i];
        }
    }
    return true;
    
}



int main()
{
    // int c=60% 10000003;
    // cout<<c;
   int ans=-1;
   int n;
   cout<<"enter a painter number";
   cin>>n;
   int size;
   cout<<"enter a  size ";
   cin>>size;
   int arr[size];
   cout<<"enter a element ";
   for(int i=0;i<size;i++)
   {
       cin>>arr[i];
   }
 int sum=0;
  for(int i=0;i<size;i++)
  {
      sum+=arr[i];
  }
//   cout<<sum;       if it's true then incremnet/initialize  start pionter to mid +1// if it's false then dec/initialize end pointer to mid -1
int s=0;                  
int e=sum;
int mid =s+(e-s)/2;
while (s<=e)
{
    if(is_possible(arr,size,n,mid))
    {
        ans=mid;
        e=mid-1;
    }
    else
    {
        s=mid+1;
    }
    mid=s+(e-s)/2;
}
                                                                                                  
cout<<mid% 10000003;
   


}