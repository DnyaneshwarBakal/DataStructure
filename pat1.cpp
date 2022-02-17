#include<iostream>
using namespace std;
int main()
{
    int r=5;
    int c=5;
    for(int r=0;r<5;r++)
    {
        for(c=0;c<5;c++)
        {
            if(r>=c)
            {
                cout<<" * "<<" ";
            }
        }
        cout<<endl;
    }
}