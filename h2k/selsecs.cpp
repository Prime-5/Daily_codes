/*
24 February 2018
Selection Sort
Running time : O(n^2)
Running space : In space
*/

#include<iostream>
using namespace std;

int selections(int n,int *ar)
{
 int i;
 int j;
 int mini;
 int pos;
 int temp;
 int l;
 for(j=0;j<n;j++)
{
 
	mini=ar[j];
	pos=j;
	for(i=j;i<n-1;i++)
	{
	 if(mini>ar[i+1])
	  { pos=i+1;
       	    mini=ar[i+1];
	  }
	}

 temp=ar[j];
 ar[j]=mini;
 ar[pos]=temp;
}
	for(l=0;l<n;l++)
	cout<<ar[l]<<endl;

}




int main()
{
 int n;
 cin>>n;
 int ar[n];
 for(int i=0;i<n;i++)
 cin>>ar[i];
 selections(n,ar);
}
