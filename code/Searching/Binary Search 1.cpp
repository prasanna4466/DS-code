#include<iostream>
using namespace std;

int binary(int arr[],int l,int r,int x){
	
	
	if(r>=l){
		
		int mid = l+(r-1)/2;
		if(arr[mid]==x){
			return mid;
		}
		if(arr[mid]>x){
			return binary(arr,l,mid-1,x);
		}
		return binary(arr,mid+1,r,x);
		
	}
	return -1;
}

int main(){
	int arr[]={1,2,3,4,5,6,7,8,9};
	while(true){
	
	int x;
	cout<<"Enter the number you want to search : ";
	cin>>x;
	
	int n = sizeof(arr)/sizeof(arr[0]);
	int result = binary(arr,0,n-1,x);
	if(result==-1){
		cout<<"Number Is Not Present In the Array";
	}
	else{
		cout<<"Number Is Present At the "<<result<<" Index";
		break;
	}
}
}