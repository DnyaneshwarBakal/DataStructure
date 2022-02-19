#include<iostream>
using namespace std;
bool check_roated(int arr[],int n)
{
    int count=0;
      for(int i=1;i<n;i++)
      {
          if(arr[i-1]>arr[i])
          {
              count++;
          }
      }
      if(arr[n-1]>arr[0])
      {
          count++;
      }
      return count<=1;
}
int main()
{
    int size;
    cout<<"enter a array size";
    cin>>size;
    int arr[size];
    cout<<"enter a array element ";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    int x=check_roated(arr,size);
    if(x==0)
    {
        cout<<"the array is not rotated sorted";
    }
    else{
        cout<<"array is rotated sorted";
    }
}