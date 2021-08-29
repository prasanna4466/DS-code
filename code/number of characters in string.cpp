#include<iostream>
#include<string>
using namespace std;

char countfre(string s){
	
	for(char c='a';c<='z';++c){
	
		int frequency=0;
		for(int i=0;i<s.length();++i){
			
			if(s[i] == c)
                    frequency++;			
		}
		cout << c << ' ' << frequency << endl;

}
	
}


int main(){
	
	string s;
	cin>>s;
	int result = countfre(s);
	
}