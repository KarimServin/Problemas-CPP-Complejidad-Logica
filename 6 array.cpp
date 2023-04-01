#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	
	int v[]={2,3,4,5,6,7},x1=3,x2=6;
	
	
	
	for(int i=0;i<6;i++) {
		
		
		if(v[i]==x1) {
			
			v[i]=x2;
			
			
		} else if(v[i]==x2) {
			
			v[i]=x1;
			
		}
		
		
	}
	
	for(int i=0; i<6;i++) {
		
		cout << v[i] << " / "; 
		
	}
	return 0;
}

