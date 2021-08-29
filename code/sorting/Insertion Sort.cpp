#include<iostream>
using namespace std;

void insertion(int arr[],int n){
	int i,j,key;
	
	for(i=1;i<n;i++){
		j=i-1;
		key=arr[i];
		
		while(j>=0 && arr[j]>key){
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=key;
	}
}

void printArray(int arr[],int n){
	
	int i;
	for(i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	
}

int main(){
	int arr[]={5,4,3,2,1,9,8};
	int n = sizeof(arr)/sizeof(arr[0]);
	
	insertion(arr,n);
	cout<<"Sorted Array Is : ";
	printArray(arr,n);
}