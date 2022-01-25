#include <bits/stdc++.h>
using namespace std;
int uniqueelement1(int arr[], int n)
{

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}
int main()
{
    int size;
    cout << "enter a size";
    cin >> size;
    int arr[size];
    cout << "enter a array element";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int ans = uniqueelement1(arr, size);
    cout <<"unique element is---> "<<ans;
}