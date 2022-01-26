#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cout << "enter a array size";
    cin >> n;
    int arr[n];
    // arr.sort();
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            if (i != j)

            {
                if (arr[i] < arr[i + 1])
                {

                    swap(arr[i], arr[j]);
                }
            }
            j++;
        }
    }
    cout << "after sorting";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}