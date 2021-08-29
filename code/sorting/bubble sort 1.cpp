#include <iostream>
#include <stdio.h>
#include <cstdlib>

using namespace std;

int main(){

int temp;
int size;
int count =0;

cout<<"enter the size of array : ";
cin>>size;

int A[size];

for(int i=0; i<size; i++){
	cout<<"enter the elements of array : ";
	cin>>A[i];
}

for(int l=0; l<size; l++){

for(int i=0;i<size-1; i++){
for(int j=0; j<size-i-1; j++){
if(A[i] > A[i+1]){
temp = A[i+1];
A[i+1] = A[i];
A[i] = temp;
count++;
}
}
}

}

cout<<"The aray is sorted in : "<<count<<" Iterations"<<endl;      //Count is taken for count the iterations required for sorting the array 

return 0;
}