#include<iostream>
using namespace std;

int ternary(int arr[],int l,int r,int x){
	if(r>=l){
		
		int mid1=l+(r-1)/3;
		int mid2=r-(r-1)/3;
		
		if(arr[mid1]==x){
			return mid1;
		}
		if(arr[mid2==x]){
			return mid2;
		}
		else if(arr[mid1]<x){
			return ternary(arr,mid1+1,r,x);
		}
		else if(arr[mid2]>x){
			
			return ternary(arr,l,mid2-1,x);
			
		}
		else{
			return ternary(arr,mid1+1,mid2-1,x);
		}
}
return -1;
}

int main(){
	
	int arr[]={10,20,30,40,50};
	
	int x;
	cout<<"enter element you want to search : \n";
	cin>>x;
	
	int n = sizeof(arr)/sizeof(arr[0]);
	
	int result = ternary(arr,0,n-1,x);
	
	if(result==-1){
		cout<<"element is not present in array\n";
	}
	else{
		cout<<"element is present at "<<result<<" index";
	}
	
	
}
			
			
		
		
	
	
	
