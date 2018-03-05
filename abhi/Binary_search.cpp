/*
5 March 2018
Binary Search
Running time : O(lgn)
Running space : In space
*/

#include<iostream>
using namespace std;

int binary_search(int *a, int l, int u,int e)
{
	if(l>u)
		return -1;

	int m=(l+u)/2;
	if(a[m]==e)
		return m;
	else if(a[m]>e)
		return binary_search(a,0,m-1,e);
	else
		return binary_search(a,m+1,u,e);
		
}

int main()
{
	int n;
	cout<<"\nEnter array size"<<endl;
	cin>>n;
	int a[n];
	cout<<"\nEnter array elements in sorted order"<<endl;

	for(int i=0;i<n;i++)
		cin>>a[i];

	int e,l,u;
	cout<<"\nEnter the element to be searched"<<endl;
	cin>>e;

	int index=binary_search(a,0,n-1,e);
	if(index==-1)
		cout<<"\nElement not found"<<endl;
	else
		cout<<"\nElement found at position : "<<index+1<<endl;

	cout<<endl<<endl;
	return 0;
}
