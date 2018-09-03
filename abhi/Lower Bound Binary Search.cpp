#include <iostream>
#include <stdio.h>
using namespace std;

int lower_binary_search(int n, int* a, int e)
{
    int i;
    if(e>=a[n-1])
        return n-1;
        
    int l=0,u=n-1;
    while(l<=u)
    {
        int m=(l+u)/2;
        
        if(a[m]<=e && a[m+1]>e)
        {
            return m;
        }
        
        else if(a[m]<e)
        {
            l=m+1;
        }
        
        else
        {
            u=m-1;
        }
    }
    
    return -1;
}

int main()
{
    int n,i,e;
    cout<<"Enter the size\n"<<endl;
    cin>>n;
    
    int a[n];
    cout<<"Enter the elements"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    

    cout<<"\nEnter the element whose lower bound is to be found"<<endl;
    cin>>e;

    int r = lower_binary_search(n,a,e);
    if(r==-1)
    {
        cout<<"\nNot found"<<endl;
    }
    else
    {
        cout<<"\nLower bound is "<<a[r]<<endl;
    }
}
