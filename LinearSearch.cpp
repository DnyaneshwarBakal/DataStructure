#include<bits/stdc++.h>
using namespace std;

bool search(int arr[],int key,int size)
{

    for(int i=0;i<size;i++)
    {
        if(arr[i]==key)
        {
            return true;
        }
    }
    return false;

}

int main()
{
    int key,n;
    cout<<"enter a array size ";
    cin>>n;
    cout<<"enter a key";
    cin>>key;
    int arr[n];
    cout<<"enter a array element";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    bool ans=search(arr,key,n);
    // cout<<"key is present or not if value is one the key is present , if value is zero the key  is not present ";
    cout<<endl;
  
  if(ans)
  {
      cout<<"key is present";
  }
  else
  {
      cout<<"key is not present ";
  }
}
