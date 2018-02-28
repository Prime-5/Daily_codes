/*
28 February
Heap Sort
Running time : O(n^2)
Running space : In space
*/

#include<iostream>

int heapsize;
int n;
using namespace std;

int left(int i)
{return 2*i+1;}
int right(int i)
{return 2*(i+1);}

void swap(int &a,int &b)
{
 int temp;
 temp=a;
 a=b;
 b=temp;
}

void max_heapify(int i,int *ar)
{
 int l,r;
 l=left(i);
 r=right(i);
 if(ar[l]>ar[i] && l<=heapsize)
 {
  swap(ar[l],ar[i]);
  max_heapify(l,ar);
 }

 if(ar[r]>ar[i] && r<=heapsize)
 { swap(ar[r],ar[i]);
   max_heapify(r,ar);
 }
 
}

void build_heapify(int n,int *ar)
{
 for(int i=n/2;i>=0;i--)
 {
 max_heapify(n,ar);
 }
}

void heapsort(int n,int *ar)
{
 build_heapify(n,ar);
 while(heapsize>0)
{ swap(ar[0],ar[heapsize]);
  heapsize-=1;
  max_heapify(0,ar);
}

}
int main()
{
 int n;
 int i;
 cin>>n;
 heapsize=n-1;
 int ar[n];
 for(i=0;i<n;i++)
 cin>>ar[i];
 heapsort(n,ar);
 for(i=0;i<n;i++)
 cout<<ar[i];
 
}
