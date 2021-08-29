#include<iostream>
using namespace std;

int count=0;
int count_one(int n)
	{
		
		while(n){
		
		n=n&(n-1);
		count++;
				
		}
		return count;
		
	}

int main()
{

	int p = count_one(23);
	cout<<p;
	
}