#include <iostream>
using namespace std;
int main(){
	int tablica [ 5 ];
	cout << "Wprowadz 5 liczb dodatnich i ujemnych: " << endl;
	for(int i=0; i<5; i++){
		cin >> tablica[ i ];
	}
	cout << "Liczby ujemne zamienione na 0: ";
	for(int i=0; i<5; i++){
		if(tablica[ i ] <= 0){
			cout << "0";
		
	
			
		}
		else cout << tablica [ i ];
	}
}