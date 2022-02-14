#include<bits/stdc++.h>
using namespace std;
int swap1(int arr[],int size)
{
    int temp;
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    cout<<arr[size-1];
}
int main()
{
    int n;
    cout<<"enter a array size";
    cin>>n;
    int arr[n];
    cout<<"enter a array element ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
   swap1(arr,n);
    // int temp=arr[0];
    // for(int i=0;i<n;i++)
    // {
    //     if(arr[i]>temp)
    //     {
    //         temp=arr[i];
    //     }
    // }
    // cout<<temp;
}