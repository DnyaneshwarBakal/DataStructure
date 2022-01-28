#include <bits/stdc++.h>
using namespace std;

int firsOccu(int arr[], int size, int key)
{
    int ans = -1;
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }
        if (key > arr[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int lastOccu(int arr[], int key, int size)
{
    int ans = -1;
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            s= mid + 1;
        }
        if (key > arr[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
 
 
int main()
{
    int n;
    cout << "enter a size of array ";
    cin >> n;
    int key;
    cout << "enter a key element ";
    cin >> key;
    int arr[n];
    cout << "enter a array element ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "first occurance is at index " << firsOccu(arr, n, key);
    cout << endl;
    cout << "last occurance is at index " << lastOccu(arr, key,n);
}