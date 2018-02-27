/*
27 February 2018
Insertion Sort
Running Time : O(n^2)
Running space : In space
*/

#include<iostream>
using namespace std;

void insertion_sort(int n,int *a)
{
	int e,i,j;
	for(i=0;i<n;i++)
	{	e=a[i];
		j=i-1;
		while(j>=0 && e<a[j])
		{	a[j+1]=a[j];
			j--;
		}
		a[j+1]=e;
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
	insertion_sort(n,a);

	cout<<"\nSorted Array"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl<<endl;

	return 0;
}
