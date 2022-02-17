#include <bits/stdc++.h>
using namespace std;
int Swap_Arr(int arr[], int size)
{
    for (int i = 0; i < size ; i++)
    {
        int temp = i;
        for (int j = i+1; j < size; j++)
        {
            if (arr[temp] > arr[j])
            {
                temp = j;
            }
        }
        swap(arr[temp],arr[i]);
    }
    cout<<"after a swapping element new array is  ";
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<"  ";
    }
}
int main()
{
    int n;
    cout << "entr a  array size";
    cin >> n;
    int arr[n];
    cout << "enter a array element ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    Swap_Arr(arr, n);
}