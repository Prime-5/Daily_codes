#include<iostream>
using namespace std;
int binarys(int num,int l,int u,int *ar)
{
 int m;
 m=(l+u)/2;
 cout<<m;
 if(u<l)
 return -1;
 if(num==ar[m])
 return m;
 else if(num<ar[m])
 { 
  u=m-1;
  return binarys(num,l,u,ar);
 }
 else
 {
  l=m+1;
  return binarys(num,l,u,ar);
 }
  

}

int main()
{
 int n;
 int i;
 int ind;
 int num;
 int l=0;
 cout<<"Enter the size of array"<<endl;
 cin>>n;
 int u=n-1;
 
 int ar[n];
 for(i=0;i<n;i++)
 cin>>ar[i];
 cout<<"Enter the number to be searched"<<endl;
 cin>>num;
 ind=binarys(num,l,u,ar);
 if(ind==-1)
 cout<<"not found"<<endl;
 else
 cout<<"found at"<<ind+1<<endl;
 
}


