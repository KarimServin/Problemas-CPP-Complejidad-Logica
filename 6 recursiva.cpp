#include <iostream>
using namespace std;

int maxDigito(int a);

int main(int argc, char *argv[]) {
	
	int a=0;
	cin>> a;
	
	return maxDigito(a);
}


int maxDigito(int a) {
	
	
	if (a/10==0) {
		
		return a;
		
	} 
	else if 
		(a%10>((a/10)%10)) {
		
		
	 return maxDigito(((a/100)*10)+(a%10));	
		
	} else {
		
		return maxDigito(a/10);
		
	}
	
	
}
