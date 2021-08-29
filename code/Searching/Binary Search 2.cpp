#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int bin(ll a[],ll l,ll r,ll x){
	
	while(r>=l){
		
		ll mid = l+(r-1)/2;
		if(a[mid]>x){
			return bin(a,l,mid+1,x);
		}
		if(a[mid]<x){
			return bin(a,mid+1,r,x);			
		}
		return mid;
		
	}
	return -1;
	
}
int main(){
	
	int n;
	cin>>n;
	ll a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		cout<<a[i];
	}
	
	sort(a,a+n);
	
	int x;
	cin>>x;
	int result = bin(a,0,n-1,x);
	
	if(result==-1){
		cout<<"element is not present in array : \n";
	}
	else{
		cout<<"element is present at : "<<result;
	}
	
}