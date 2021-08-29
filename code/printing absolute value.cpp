#include<iostream>
using namespace std;

int main(){
	int n,m;
	cout<<"Enter The Two Numbers : \n";
	cin>>n>>m;
	
	int result=n-m;
	
	if(result<0){
		result=result*(-1);
	}
	cout<<"absolute value is : "<<result;
}