#include <bits/stdc++.h>
using namespace std;
int BinarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}

int main()
{
    int n;
    cout << "enter a size of array";
    cin >> n;
    int arr[n];
    int key;
    cout << "enter a key";
    cin >> key;
    cout << "enter a array element";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int index = BinarySearch(arr, n, key);
    if (index == -1)
    {
        cout << "element is not present in array ";
    }
    else
    {
        cout << "element is present at index " << index;
    }
}