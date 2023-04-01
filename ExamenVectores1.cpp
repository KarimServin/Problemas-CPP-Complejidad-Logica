#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

float funcion1(int vector[],int M,int &distancia);


int main() {
	
	int vector[1001];
	int N,M,distancia;
	
	float promedio;
	
	cout << fixed << setprecision(2);
	
	cin>> N; 
	
	for(int i=1;i<=N;i++) {
		
		cin>> M;
		
		for(int j=0; j<M; j++) 
			
			cin>> vector[j];
		
		
		promedio=funcion1(vector,M,distancia);
		
		cout << distancia <<  " " << promedio << endl;
		
	}
	
	
	
	return 0;
}

float funcion1(int V[],int M,int &distancia){
	
	distancia=0;
	float k=0.00;
	int max=0,min=0;
	
	for(int i=0; i<M;i++) {
		
		if(i==0) {
			max=i;
			min=i;
			
		} else {
			
			if(V[i]>V[max]) {
				
				
				max=i;
			} else if (V[i]<V[min]) {
				
				
				min=i;
				
			}
			
		}
		
		k=k+V[i];
		
	}
	
	distancia=abs(max-min);
	
	
	k=k/M;
	
	
	return k;
	
	
}
