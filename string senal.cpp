#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	
	
	string senal,nuevasenal;
	
	getline(cin,senal);
	
	for(int i=0; i<senal.size();i++) {
		
		
		if((senal[i]>=65 && senal[i] <=122) or senal[i]==32) { 
		
			nuevasenal+=senal[i];
		
		
	}
	
	}
	senal = nuevasenal;
	cout << senal;
	
	return 0;
}

