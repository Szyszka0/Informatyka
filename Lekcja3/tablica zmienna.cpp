#include <iostream>
using namespace std;
int main(){
	int tablica [ 5 ];
	cout << "Wprowadz 5 liczb: " << endl;
	for(int i=0; i<5; i++){
		cin >> tablica[ i ];
		
		
	
	
	}
	cout << "Liczby parzyste: ";
	for(int i=0; i<5; i++){
		if (tablica[ i ]%2 == 0){
			cout << tablica[ i ] << ", ";
		}
	}
	

}