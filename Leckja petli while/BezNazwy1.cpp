#include <iostream>
using namespace std;

int main(){
	
	//while (warunek zakonczenie(true))
	short a = 2;
	while(a <= 30){
		cout << a << ", ";
		a += 2;
	}
	cout << endl << endl;
	//do  while()
	
	short liczba;
	do{
		cout << "Podaj liczbe: ";
		cin >> liczba;
		
	}while(liczba != 5);
}