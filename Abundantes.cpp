#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	
	int x;
	int y;
	
	cin>> x >> y;
	int j=0;
	int sum;
	for(int i=x+1;i<y;i++) {
		
		sum=0;
		j=int(i/2);
		
		while(j>0) {
			
			if(i%j==0) {
				
				sum=sum+j;
				
				
			}
			j--;
		}
		
		if(i<sum) {
			
			cout << i << endl;
			
		}
		
	} 
	
	return 0;
}

