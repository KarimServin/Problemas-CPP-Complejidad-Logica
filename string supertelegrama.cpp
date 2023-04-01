#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
	
	string telegrama,bufferpalabras,palpermanentes;
	
	int ca=0,ce=0,ci=0,co=0,cu=0,cblancos=0,cpal7=0,cpalabras=0;
	
	cout << "Ingrese el telegrama :  ";
		
	
		
		
		getline(cin,telegrama);
	
	    for(unsigned int i=0; i<telegrama.size(); i++) {
			
			//CUENTAVOCALES 
			switch(telegrama[i]) {
			case 'a': ca++; break;
			case 'e': ce++; break;	
			case 'i': ci++; break;	
			case 'o': co++; break;
			case 'u': cu++; break;
			default: break;
			}
			
			
			
			if(telegrama[i]==' ') {
				
				cpalabras++;
				cblancos++;
				
				
				
				if(bufferpalabras.size()>7) {
					
					palpermanentes=palpermanentes+bufferpalabras+", ";
					cpal7++;
					bufferpalabras.resize(0);
					
				} else {
					
					bufferpalabras.resize(0);
					
				}
					
			} else if(telegrama[i]>=65 && telegrama[i]<=122){
				
				bufferpalabras=bufferpalabras+telegrama[i];
			}
		
				
				
		} //EL DEL FOR
			
			
		//EN EL HIPOTETICO CASO QUE LA ULTIMA PALABRA SEA MAYOR A 7 
		
			if(bufferpalabras.size()>7) {
				palpermanentes=palpermanentes+bufferpalabras+", ";
				cpal7++;
				bufferpalabras.resize(0);
			} 
		
		
		
		cout << "CANTIDAD DE VOCALES: " << endl << endl;
		cout << ">> a: " << ca << " ;" << endl;  
		cout << ">> e: " << ce << " ;" << endl;
		cout << ">> i: " << ci << " ;" << endl;  
		cout << ">> o: " << co << " ;" << endl;
		cout << ">> u: " << cu << " ;" << endl << endl << endl; 
		
		//PALABRAS CON MAS DE 7 LETRAS
		cout << "CANTIDAD DE PALABRAS CON MAS DE 7 LETRAS: " << cpal7 << ";" << "LAS CUALES SON: " << endl;
		cout << palpermanentes << endl << endl << endl;
		
		
		//PORCENTAJE ESPACIOS EN BLANCO
		cout << "CANTIDAD ESPACIOS EN BLANCO : " << fixed << setprecision(2) << float(cblancos*100)/(telegrama.size()) << " %" << endl << endl << endl;
		
		//COSTO TELEGRAMA
		cout << "COSTO TELEGRAMA: $" << float ((cpalabras+1)*5.2) << endl;
		
	
	return 0;
}

