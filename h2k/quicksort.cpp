/*
4 March 2018
Quick Sort
Running Time (Average) : O(nlgn)
Running space : In space.
*/

#include<iostream>
using namespace std;
void swap(int &a,int &b)
{
 int temp;
 temp=a;
 a=b;
 b=temp;
}

int partition(int p,int r, int *ar)
{
 int i,j;
 i=p-1;
 j=p;
 for(j=p;j<r;j++)
{
  if(ar[j]<ar[r])
 { 
   i=i+1;
   swap(ar[i],ar[j]);
 } 
 
}
swap(ar[i+1],ar[j]);
return i+1;
}

void quicksort(int p,int r,int *ar)
{
 int q;
 if(p<r)
 {q=partition(p,r,ar);
 quicksort(p,q-1,ar);
 quicksort(q+1,r,ar);
}
}
int main()
{
 int n;
 int i;
 int r;
 cin>>n;
 int p=0;
 r=n-1;
 int ar[n];
 for(i=0;i<n;i++)
 cin>>ar[i];
 quicksort(p,r,ar);
 for(i=0;i<n;i++)
 cout<<ar[i]<<endl;
 
}

