#include<bits/stdc++.h>
using namespace std;

double func(double x){
return 2*x*x-12*x+7;
}
int main()
{
int n;
cin>>n;
while(n--){
long long int l,r;
cin>>l>>r;
double start=l;
double end=r;
for(int i=0;i<200;i++)
{
double l1=start+(end-start)/3.0;
double l2=end-(end-start)/3.0;
if(func(l1)<func(l2)) end=l2; else start=l1;
}
double x=end;
cout<<(long long)floor(func(x))<<endl;
}
return 0;
}