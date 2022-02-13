#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l;

    l.push_back(89);
    l.push_back(9);
    l.push_back(69);
    l.push_back(91);
    l.push_back(92);
    l.push_back(84);
    l.push_front(888);
 
    for (int i : l)
    {
        cout << i << endl;
    }
    // l.erase(l.begin());
     l.remove(89);
    cout << "after erasing list..\n";
    for (int i : l)
    {
        cout << i << endl;
    }
    l.sort();
    cout << " after sorting\n";
    for (int i : l)
    {
        cout << i << endl;
    }
    l.pop_back();
    l.pop_front();
    list<int> n(l);
    l.merge(n);
    l.sort();
    cout<<"after meging list|--->";
    for(int i:l)
    {
        cout<<i<<" ";
    }
}