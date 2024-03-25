#include <iostream>
using namespace std;

void funkcja1(short wybor_rok) {
	cin >> wybor_rok;
		for(int i = 0; i < 7; i++){
			if (ksiazki_DDT[i].rok >= wybor_rok){
			cout << ksiazki_DDT[i].tytul << "	" << ksiazki_DDT[i].autor << "	" << ksiazki_DDT[i].autor << "	" << ksiazki_DDT[i].rok << "	" << ksiazki_DDT[i].wydawnictwo << endl;
			}
}
}
void funkcja2(float wybor_cena) {
	cin >> wybor_cena;
		for(int i = 0; i < 7; i++){
			if (ksiazki_DDT[i].cena >= wybor_cena){
			cout << ksiazki_DDT[i].tytul << "	" << ksiazki_DDT[i].autor <<  "	" << ksiazki_DDT[i].rok << "	" << ksiazki_DDT[i].wydawnictwo << "	" << ksiazki_DDT[i].cena << endl;
			}
		}
}
void funkcja3(string wybor_wydawnictwo){
	cin >> wybor_wydawnictwo;
		for(int i = 0; i < 7; i++){
			if (ksiazki_DDT[i].wydawnictwo == wybor_wydawnictwo){
			cout << ksiazki_DDT[i].tytul << "	" << ksiazki_DDT[i].autor << "	" << ksiazki_DDT[i].rok << "	" << ksiazki_DDT[i].wydawnictwo << endl;
	}
}
}

struct ksiazki_DDT {

string tytul;
string autor;
int rok;
string wydawnictwo;
float cena;

}
 ksiazki_DDT[ 7 ] =
{
    { "Tytul1", "autor1", 1925, "Helion1", 23.54 },
    { "Tytul2", "autor2", 1926, "Helion2", 24.54 },
    { "Tytul3", "autor1", 1927, "Helion3", 25.54 },
    { "Tytul4", "autor2", 1928, "Helion1", 26.54 },
    { "Tytul5", "autor1", 1921, "Helion2", 27.54 },
    { "Tytul6", "autor2", 1930, "Helion3", 28.54 },
    { "Tytul7", "autor1", 1931, "Helion1", 29.54 },
};
int main(){
	short wybor_rok;
	float wybor_cena;
	string wybor_wydawnictwo;
	int wybor;
	cout << "Witaj w ksiegarnii" << endl;
	cout << "Po jakiej kategorii chcial bys wyszkuac ksiazke: " << endl << "1. Rok wydania " << endl << "2. Cena " << endl << "3. Wydawnictwo " << endl << "0. Wyjscie" << endl;
	
	cin >> wybor;
	switch (wybor)
	{
	case 1:
		cout << "Podaj od jakiego roku chcesz zobaczyc ksiazki: ";
		cin >> wybor_rok;
		for(int i = 0; i < 7; i++){
			if (ksiazki_DDT[i].rok >= wybor_rok){
			cout << ksiazki_DDT[i].tytul << "	" << ksiazki_DDT[i].autor << "	" << ksiazki_DDT[i].autor << "	" << ksiazki_DDT[i].rok << "	" << ksiazki_DDT[i].wydawnictwo << endl;
			}
		}
		
			
			
		break;
			
	case 2:
			cout << "Podaj od jakiej ceny chcesz zobaczyc ksiazki: ";
		cin >> wybor_cena;
		for(int i = 0; i < 7; i++){
			if (ksiazki_DDT[i].cena >= wybor_cena){
			cout << ksiazki_DDT[i].tytul << "	" << ksiazki_DDT[i].autor <<  "	" << ksiazki_DDT[i].rok << "	" << ksiazki_DDT[i].wydawnictwo << "	" << ksiazki_DDT[i].cena << endl;
			}
		}
			
		break;
			
			
			
			
	case 3:
			cout << "Podaj od jakiego wydawnctwa chcesz zobaczyc ksiazki: ";
		cin >> wybor_wydawnictwo;
		for(int i = 0; i < 7; i++){
			if (ksiazki_DDT[i].wydawnictwo == wybor_wydawnictwo){
			cout << ksiazki_DDT[i].tytul << "	" << ksiazki_DDT[i].autor << "	" << ksiazki_DDT[i].rok << "	" << ksiazki_DDT[i].wydawnictwo << endl;
	}
}
		break;
		
			case 0:
				return 0;
			
			
		break;
	}
}

