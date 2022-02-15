#include <bits/stdc++.h>
using namespace std;
int main()

{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
      


    //   unordered_map <int> m ;
    

    vector<int>::iterator i = v.begin();
    while (i != v.end())
    {
        cout <<*i<<" ";
        i++;
    }
}