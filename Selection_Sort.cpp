#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter a array size";
    cin>>n;
    int arr[n];
    cout<<"enter a array elment";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }                                    //4 5 1 2  3
    for(int i=0;i<n;i++)
    {
        int temp=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[temp])
            {
                temp=j;
            }
        }
        swap(arr[i],arr[temp]);
    }
cout<<"after sorting array element ";
for(int i=0;i<n;i++)
{
    cout<<arr[i];
}
}