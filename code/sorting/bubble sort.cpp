#include<iostream>
using namespace std;

void bubble(int arr[],int n){
	
	int i,j;
	for(i=0;i<n-1;i++){
	for(j=0;j<n-i-1;j++){
		if(arr[j]>arr[j+1]){
		
		int temp=arr[j];
		arr[j]=arr[j+1];
		arr[j+1]=temp;
	}
	}
}
}

void printArray(int arr[],int size){
	int i;
	for(i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
}

int main(){
	
	int arr[]={76,12,54,98,3};
	int n=sizeof(arr)/sizeof(arr[0]);
	bubble(arr,n);
	cout<<"Sorted Array is : ";
	printArray(arr,n);
	
	
}