#include <iostream>
using namespace std;
int mayor(int A[ ],int tam,int inf, int sup);

int main(int argc, char *argv[]) {

	
	int A[]={4,5,6,7},inf=3,sup=23;
	
	mayor(A,7,inf,sup);
	
	
	return 0;
}



int mayor(int A[ ],int tam, int inf, int sup) {
	
	int mayor;
	
	bool k=true;
	
	for(int i=0; i<tam;i++) {
		
		
		
		
		if(A[i]<=sup && A[i]>=inf) {
			
			if(k) {
				
				mayor=A[i];	
				k=false;
			} else if (A[i]>mayor) {
				
				mayor=A[i];
				
			}
		   	
			
			
		}
			
		
	
		}
	
	cout << mayor;
	return 0;
	
	
}
