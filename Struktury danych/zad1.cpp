#include <iostream>
using namespace std;

struct DDT 
{
    
    string nazwa;
    string waga;
    string wiek;
  
};

int main()
{
   
    DDT Uzytkownicy[ 5 ];
    cout << "Wprowadz dane.\n";
    
    for( short licz = 0; licz < 5; licz++ ) {
        cout << "Nazwa: ";
        cin >> Uzytkownicy[ licz ].nazwa;
        cout << "Waga (gram): ";
        cin >> Uzytkownicy[ licz ].waga;
        cout << "Wiek (tygodnie): ";
        cin >> Uzytkownicy[ licz ].wiek;
        
    }
 
    cout << endl
    << "Wprowadzone zwierzêta: "
    << endl;
    for( short licz = 0; licz < 5; licz++ ) {
        cout << "Zwierze nr " << licz + 1
        << "\tnazwa: " << Uzytkownicy[ licz ].nazwa
        << "\twaga: " << Uzytkownicy[ licz ].waga
         << "\twiek: " << Uzytkownicy[ licz ].wiek
        << endl;
    }
   
    cin.get();
    return(0);
}
