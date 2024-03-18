#include <iostream>
using namespace std;
//struktura dla użytkowników forum
struct DDT //deklaracja struktury
{
    //opis struktury
    string nick;
    string haslo;
    string status;
    string rodzaj_konta;
};

int main()
{
    //Tworzenie obiektu struktury
    DDT Uzytkownicy[ 3 ];
    cout << "Wprowadz dane.\n";
    //wprowadzenie 3 uzytkowników
    for( short licz = 0; licz < 3; licz++ ) {
        cout << "Podaj nick: ";
        cin >> Uzytkownicy[ licz ].nick;
        cout <<  endl;
        cout << "Podaj haslo: ";
        cin >> Uzytkownicy[ licz ].haslo;
         cout <<  endl;
        cout << "Podaj status: " << endl;
        cin >> Uzytkownicy[ licz ].status;
         cout <<  endl;
        cout << "Podaj rodzaj konta: ";
        cin >> Uzytkownicy[ licz ].rodzaj_konta;
         cout <<  endl;
    }
    //wyswietlanie wprowadzonych danych
    cout << endl
    << "Oto rezultat wprowadzonych danych:"
    << endl;
    for( short licz = 0; licz < 3; licz++ ) {
        cout << "Uzytkownik " << licz + 1
        << "\tNick: " << Uzytkownicy[ licz ].nick
        << "\tHaslo: " << Uzytkownicy[ licz ].haslo
        << "\tStatus: " << Uzytkownicy[ licz ].status
        << "\tRodzaj konta: " << Uzytkownicy[ licz ].rodzaj_konta
        << endl;
    }
   
    cin.get();
    return(0);
}

