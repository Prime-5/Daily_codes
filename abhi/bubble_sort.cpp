/*
24 February 2018
Bubble Sort
Running time : O(n^2)
Running space : In space
*/

#include<iostream>
using namespace std;

void selectionsort(int n,int *a)
{
	int i,j,temp;
	for(i=0;i<n-1;i++)
	{	for(j=0;j<n-i-1;j++)
		{	if(a[j]>a[j+1])
			{	temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
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

	selectionsort(n,a);

	cout<<"\nSorted Array"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}

	return 0;
}
