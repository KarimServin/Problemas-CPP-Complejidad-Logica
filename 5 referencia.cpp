#include <iostream>
using namespace std;
int menorr(float,float);
void mayorn(float,float,float,float&,float&);
int compare(float,float,float);

int main() {
	
	float x=0,y=0,z=0,mayor=0,menor=0;
	
	
	cin>> x >> y >> z;
	
	mayorn(x,y,z,mayor,menor);
	
	cout << "mayor: "<< mayor << endl;
	cout << "menor: "<< menor << endl;
	
	return compare(x,y,z);
	
}


void mayorn(float x,float y,float z,float& mayor,float& menor) {
	
	if(x>=y && x>=z) {
		
		mayor=x;
		menor=menorr(y,z);
		
	} else if (y>=z && y>=x) {
		
		mayor=y;
		menor=menorr(x,z);
	} else if(z>=y && z>=x) {
		
		mayor=z;
		menor=menorr(y,z);
	}
	
	
}

int menorr(float a,float b) {
	
	if(a>b) {
		
		return b;
		
	} else {
		
		return a;
		

		
	}
	
}

int compare(float x,float y,float z) {
	
	if(x==y and y==z) {
		
		return 2;
		
	} else if (x==z || x==y || z==y) {
		
		return 0;
		
	} else {
		
		return 1;
		
	}
	
}
