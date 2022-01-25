#include<bits/stdc++.h>
using namespace std;
void print(int arr[], int size)
{
// cout<<"hello this is print function";
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<"  ";
    }
    cout<<endl;


}
void alternate(int arr[],int size)
{
    // cout<<"this is swapalternate function";
    for(int i=0;i<size;i+=2)
    { 
        if(i+1<size)
        {
    //    swap(arr[i],arr[i+1]);
    int temp=arr[i+1];
    arr[i+1]=arr[i];
    arr[i]=temp;
        }
 
    }
    

}

int  main()
{
    int size;
    cout<<"enter a array size";
    cin>>size;
    int arr[size];
    cout<<"enter a array element";
    for(int i=0;i<size;i++)
    {

        cin>>arr[i];
    }
    alternate(arr,size);
    cout<<endl;
    print(arr,size);
    

}