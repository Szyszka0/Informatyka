#include <iostream>
using namespace std;

int main(){
	short szerokosc, wysokosc;
	cout << "Podaj szerokość: ";
	cin >> szerokosc;
	cout << "Podaj wysokość: ";
	cin >> wysokosc;


for(int i = 0; i < wysokosc; i++){
	for(int j= 0; j < szerokosc; j++){
		
		if(i == 0 || i == wysokosc - 1)cout << "*";
		else if(j == 0 || j == szerokosc -1)cout << "*";
		else cout << " ";
	
	}
	cout << endl;
}



}