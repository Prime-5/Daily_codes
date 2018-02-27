#include<iostream>

using namespace std;
int bubble(int n, int *ar)
{
 int temp;
 int  i;
 for(int j=0;j<n-1;j++)
 {
  temp=0;
	for(i=0;i<n-1;i++)
 	{ 
	 if(ar[i]>ar[i+1])
	 {temp=ar[i];
	 ar[i]=ar[i+1];
	 ar[i+1]=temp;
	 }
	 cout<<" "<<ar[i];

	}
 }
for(int l=0;l<n;l++)
cout<<" "<<endl<<ar[l];
}
	
int main()
{
 int n;
 int i;
 cin>>n;
 int ar[n];
 for(i=0;i<n;i++)
 cin>>ar[i];
 bubble(n,ar);
}
