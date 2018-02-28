/*
28 February 2018
Insertion Sort
Running Time : O(n^2)
Running Space : In space
*/

#include<iostream>
using namespace std;
int insertions(int n,int*a)
{
 int i,temp,j,key;
 for(i=0;i<n;i++)
 {
 key=a[i];
 j=i-1;
 	while(j>=0&& key<a[j])
	{ 
  	a[j+1]=a[j];
  	j--;
	}

a[j+1]=key;
}
for(i=0;i<n;i++)
cout<<a[i]<<endl;	
}

int main()
{
 int n;
 int i;
 cin>>n;
 int ar[n];
 for(i=0;i<n;i++)
 cin>>ar[i];
 insertions(n,ar);
}
