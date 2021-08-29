#include<bits/stdc++.h>
using namespace std;

int main()
{

int n;
cin>>n;

int arr[n];
int m;
cin>>m;

int sum=0;
for(int i=0; i<=n; i++)
{
int t1;
cin>>t1;

if(t1==m)
sum=i;



}

if(sum>0)
cout<<sum<<endl;
else
cout<<"-1"<<endl;


}