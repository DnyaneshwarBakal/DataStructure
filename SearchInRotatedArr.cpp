#include <iostream>
using namespace std;
int getpivot(int arr[], int n)
{

    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}
int BinarySearch(int arr[], int start, int end, int size,int key)
{
    int s = start;
    int e = end;

    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        if (arr[mid] < key)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return -1;
}

int main()
{
    int n;
    cout << "enter a array size";
    cin >> n;
    int key;
    cout<<"enter a key element";
    cin>>key;
    int arr[n];
    cout << "enter a array element";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // cout<<"pivot element at index"<<getpivot(arr,n);

    int pivot = getpivot(arr, n);
    if (arr[pivot] <= arr[0] && arr[pivot] <= n-1)
    {
        cout <<"pivot element is present at index"<< BinarySearch(arr, pivot,  n-1,n,key);
    }
    else
    {
        cout << "pivot element is not present"<<BinarySearch(arr, 0, pivot-1, n,key);
    }
}