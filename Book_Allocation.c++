#include <bits/stdc++.h>
using namespace std;
bool is_possible(int arr[], int std, int size, int mid)
{
    int stdCount = 1;
    int pageSum = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] + pageSum <= mid)
        {

            pageSum += arr[i];
        }
        else
        {
            stdCount++;

            if (arr[i] > mid || stdCount > std)
            {
                return false;
            }
            // pageSum=0;
            // pageSum=pageSum+arr[i]
            pageSum = arr[i];
        }
    }
    return true;
}

int main() 
{ int sum=0;
    int std;
    cout << "enter a student number";
    cin >> std;
    int size;
    cout << "enter a number of books ";
    cin >> size;
    int arr[size];
    cout << "enter a bookpages size";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }


    for (int i = 0; i <size; i++)
    {
         sum+= arr[i];
    }
    // cout<<sum;
    // cout << sum;   
    int s = 0;
    int e = sum;
    int ans = 0;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (is_possible(arr, std, size, mid))
        {
            ans = mid;
            //    s = mid + 1;
           e = mid - 1;
            
        }
        else
        {
            s = mid + 1; 
            //  e = mid - 1;
            
        }
      
    }
     cout << mid ;
}