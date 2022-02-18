#include <bits/stdc++.h>
using namespace std;
void Bubblesort(int arr[], int n)
{

    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1] ){
                    swap(arr[j], arr[j + 1]);
                }
        }
    }
    cout<<"after a merging new array is";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"  ";
    }
}
int main()
{
    int n;
    cout << "enter array size";
     cin >> n;
    int arr[n];
    cout << "enter a array element ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    Bubblesort(arr, n);
}