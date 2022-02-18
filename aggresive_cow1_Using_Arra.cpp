#include<bits/stdc++.h>
/*
cow=2
size=5
i/p  2 6 4 3 1 
o/p  5


*/
using namespace std;
bool is_possible(int arr[],int cownum,int size,int mid)
{
    int cow_num=1;
    int last=arr[0];
    for(int i=0;i<size;i++)
    {
        if(arr[i] - last>=mid)
        {
            cow_num++;
            if(cow_num==cownum)
            {
                return true;
            }
            last=arr[i];
        }
    }
    return false;



}
int main()
{

    int cow;
    cout<<"enter a cow number ";
    cin>>cow;
    int stalls;
    cout<<"enter a stalls size";
    cin>>stalls;
    int arr[stalls]; 
    cout<<"enter a array elment ";
    for(int i=0;i<stalls;i++)
    {
        cin>>arr[i];

    }
     int temp;

    for (int i = 0; i < stalls; i++)
    {
        for (int j = i + 1; j < stalls; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    int maxi=-1;
    for(int i=0;i<stalls;i++)
    {
    maxi=max(maxi,arr[i]);
    }
    int s=0;
    int ans=-1;
    int e=maxi;
    int mid =s+(e-s)/2;
    while(s<=e)
    {
        if (is_possible(arr,cow,stalls,mid))
        {
            ans=mid;
            s=mid+1;
        }
        else
        {
            e=mid-1;

        }
        mid =s+(e-s)/2;
    }
    cout<<ans;
}