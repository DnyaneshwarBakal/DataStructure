#include<iostream>
using namespace std;
void MoveEven(int arr[],int size)
{
    int i,temp=0;
    for(i=0;i<size;i++)
    {
        if(arr[i]%2==0)
        {
            swap(arr[i],arr[temp]);
            temp++;
        }
    }
    cout<<"after sepration new array is ";
    for(int  i=0;i<size;i++)
    {
        cout<<arr[i]<<"  ";
    }

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
    MoveEven(arr,n);
}