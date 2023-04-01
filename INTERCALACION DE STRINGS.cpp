#include <iostream>
#include <string>
using namespace std;

string intercalar(string  s1, string s2, int tam);

int main() {
	
	string s1,s2;
	
	getline(cin,s1);
	getline(cin,s2);
	
 cout << intercalar(s1,s2,s1.size()-1) << endl;
	
	return 0;
}

string intercalar(string  s1, string s2, int tam) {
	
	
	if(tam==0) {
		
		return s1.substr(0,1)+s2.substr(0,1);
		
	} else {
		
		return s1.substr(tam,1)+s2.substr(tam,1)+intercalar(s1,s2,tam-1);
		
		
	}
	
	
	
	
}
