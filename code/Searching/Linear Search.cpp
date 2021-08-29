#include<iostream>
using namespace std;

int search(int arr[],int n, int x){
	
	int i;
	for(i=0;i<n;i++){
		if(arr[i]==x){
			return i;
		}
	}
	return -1;
}

int main(){
	
	int arr[]={1,2,3,4,10,40};
	
	while(true){
	
	int x;
	cout<<"\nenter number you wants to search : ";
	cin>>x;
	
	int n = sizeof(arr)/sizeof(arr[0]);
	
	int result=search(arr,n,x);
	
	
	if(result==-1){
		cout<<"element is not present in array";
	}
	else{
		cout<<"element is present at : "<<result<<" index";
		break;
	}
	
}
}