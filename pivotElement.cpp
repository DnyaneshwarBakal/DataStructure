#include<bits/stdc++.h>
using namespace std;
int pivot(int arr[],int size)
{
    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;
    while(s<e)
    {
        if(arr[mid]>arr[0])
        {
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;

    }
    return s;

}
int main()
{
    int n;
    cout<<"enter a size of array";
    cin>>n;
    int arr[n];
    cout<<"enter a array element ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int index=pivot(arr,n);
    cout<<"pivot element at index-->"<<index;
}