#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	
	string elnovio, lanovia;
	
	cout <<"quien eres?" << endl;
	getline(cin,elnovio);
	
	cout <<"a quien amas?" << endl;
	
	getline(cin, lanovia);
	
	cout << elnovio << " ama mucho " << lanovia;
	
	return 0;
}

