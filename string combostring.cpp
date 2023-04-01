#include <iostream>
using namespace std;
void comboString(string str1, string str2);
int main() {
	
	string a="hddddola", b="comoestas";
	
	comboString(a,b);
	
	
	return 0;
}

void comboString(string str1, string str2) {
	
	
	if(str1.size()>str2.size()) {
		
		cout << str2 + str1 + str2 << endl;
		
	} else {
		
		cout << str1 + str2 + str1 << endl;
		
		
	}
	
	
	
}
