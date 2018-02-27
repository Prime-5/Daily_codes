#include<iostream>
using namespace std;

void linear_search(int num,int m,int *ar)
{
 int i;
 for(i=0; ;i++)
 {
 if(num==ar[i])
 break;
 }

 if(i==m-1)
 cout<<"NOT FOUND"<<endl;
 else
 cout<<"found"<<endl;

}
int main()
{
 int n;
 cin>>n;
 int ar[n+1];
 for(int i=0;i<n;i++)
 cin>>ar[i];
 cout<<"PLS enter the number to be found";
 int num;
 cin>>num;
 ar[n]=num;
 linear_search(num,n+1,ar);
}



