#include <bits/stdc++.h>
using namespace std;
int Peakele(int arr[], int size)
{

    int s = 0;
    int e = size - 1;
    int mid = s + (e - s) / 2;
    while (s <
     e)
    {
        if (arr[mid] < arr[mid + 1])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }

        mid = s + (e - s) / 2;
    }
    //  cout<<e;
    cout << "peak is at index " << s << " is --> " << arr[s];
    cout << endl;
    return arr[s];
    // return s +1;
}
int main()
{
    int n;
    cout << "enter a array size ";
    cin >> n;
    int arr[n];
    cout << "enter a array element";
    for (int i = 0; i < n; i++)

    {
        cin >> arr[i];
    }
    cout << "peak element is--->" << Peakele(arr, n) ;
    // Peakele(arr,n);
}