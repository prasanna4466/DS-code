#include<iostream>
using namespace std;

class power{
public:
bool isPowerOfTwo(int x)
    {
        if(x == 0)
            return false;
        else
        {
            while(x % 2 == 0) 
			x /= 2;
            return (x == 1);
            }
    }
};

int main(){
	
	power p;
	cout<<p.isPowerOfTwo(16);
}