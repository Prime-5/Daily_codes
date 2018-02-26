/*
26 February 2018
Linear Search with Sentinel
*/

#include<iostream>
using namespace std;

void linear_search_with_sentinel(int *a,int n)
{
	int i=0,e;
	cout<<"\nEnter the element to be searched"<<endl;
	cin>>e;
	a[n-1]=e;

	while(1)
	{	if(a[i]==e)
			break;
		i++;
	}
	if(i==n-1)
		cout<<"\nElement not found"<<endl;
	else
		cout<<"\nElement found at pos no : "<<i+1<<endl;
	cout<<endl<<endl;

}

int main()
{
	int n;
	cout<<"\nEnter array size"<<endl;
	cin>>n;
	n=n+1;
	int a[n];
	cout<<"\nEnter array elements"<<endl;

	for(int i=0;i<n-1;i++)
		cin>>a[i];

	linear_search_with_sentinel(a,n);
}
