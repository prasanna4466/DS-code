#include<iostream>
using namespace std;
#define MAX 1000


class stack{
	int top=-1;     //Stack is empty
	int a[MAX];     //Stack size is sets to maximum
	public:
		bool isEmpty(){
			return (top<0);
		}
		int push(int n){
			if(top>=(MAX-1))
			{
				cout<<"Stack Overflow";
	
			}
			else{
				a[++top]=n;
				cout<<"Pushed element is : "<<n<<"\n";
			}
		}
		int pop(){
			if(top<0){
				cout<<"stack Underflow";
			}
			else{
				int n = a[top--];
				return n;
			}
		}
		
		int peek(){
			if(top<0){
				cout<<"stack is empty";
			}
			else{
				int n = a[top];
				return n;
			}
		}
		
	void display(){
		if(top>=0){
			cout<<"Stack Elements Are : ";
			for(int i=top;i>=0;i--){
				cout<<a[i]<<"\n";
			}
		}
	}
};







int main(){
 	
 	stack s;
 	s.push(9);
 	s.push(15);
 	s.push(37);
 	s.push(42);
 	s.display();
 	while(!s.isEmpty()){
 		
 	cout<<"Top element is : "<<s.peek()<<"\n ";
 	cout<<"popped element is : "<<s.pop()<<"\n ";
	}
 	
 	
 }