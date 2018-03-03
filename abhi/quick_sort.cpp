/*
4 March 2018
Quick Sort
Running Time (Average) : O(nlgn)
Running space : In space.
*/

#include<iostream>
using namespace std;

void swap(int &a, int &b)
{
	int temp=a;
	a=b;
	b=temp;
}

int Partition(int *a, int p, int r)       //Partitions the subarray into less than pivot and greater than pivot.
{                                         //Places pivot at right position and returns its index.
	int i=p-1,j=p;
	while(j!=r)
	{
		if(a[j]<a[r])
		{	i++;
			swap(a[i],a[j]);
		}		
		j++;
	}
	swap(a[i+1],a[r]);
	return i+1;
}

void Quicksort(int *a, int p, int r)        //Recursively calls itself to quickly sort the array.
{
	if(p<r)
	{	int q=Partition(a,p,r);
		Quicksort(a,p,q-1);
		Quicksort(a,q+1,r);
	}
}

int main()
{
	int n,i;
	cout<<"Enter size of array"<<endl;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{	cin>>a[i];
	}

	cout<<"\nOriginal array"<<endl;
	for(i=0;i<n;i++)
	{	
		cout<<a[i]<<" ";
	}

	Quicksort(a,0,n-1);

	cout<<"\nSorted Array"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl<<endl;

	return 0;
}
