/*
28 February
Heap Sort
Running time : O(n^2)
Running space : In space
*/

#include<iostream>
using namespace std;

int heapsize;

int left(int i)					              //Return index of left child of a node
{	return (2*i)+1;
}

int right(int i)				               //Return index of right child of a node
{	return (2*i)+2;
}

int parent(int i)				                //Return index of parent of a node
{	return (i-1)/2;
}

void swap(int &a, int &b)			          //Swap two given indexes
{
	int temp=a;
	a=b;
	b=temp;
}

void max_heapify(int *a, int i)			    //Makes i, l(i) and r(i) follow the max_heap principle
{
	int l=left(i),r=right(i),largest=i;
	if(l<=heapsize && a[l]>a[i])
		largest=l;
	if(r<=heapsize && a[r]>a[largest])
		largest=r;

	if(largest!=i)
	{	swap(a[i],a[largest]);
		max_heapify(a,largest);
	}
}

void build_max_heap(int *a)			         //Making the tree follow max_heap principle
{
	for(int i=heapsize/2;i>=0;i--)
	{
		max_heapify(a,i);
	}
}

void Heapsort(int *a)				              //Implementing Heapsort algo.
{
	build_max_heap(a);
	while(heapsize>=0)
	{
		swap(a[0],a[heapsize]);
		heapsize--;
		max_heapify(a,0);	
	}
}

int main()
{
	int n,i;
	cout<<"Enter size of array"<<endl;
	cin>>n;
	heapsize=n-1;

	int a[n];
	for(i=0;i<n;i++)
	{	cin>>a[i];
	}

	cout<<"\nOriginal array"<<endl;
	for(i=0;i<n;i++)
	{	
		cout<<a[i]<<" ";
	}

	Heapsort(a);

	cout<<"\nSorted Array"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl<<endl;

	return 0;
}
