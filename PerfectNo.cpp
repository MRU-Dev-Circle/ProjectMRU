#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,summ=0;
    cin>>n;
    
    for(int i=1;i<=(n/2);i++)
    {
        if(n%i==0)
        {
            summ+=i;
        }
    }

    if(summ==n)
    {
        cout<<"TRUE";
    }
    else
    {
        cout<<"False";
    }
}
