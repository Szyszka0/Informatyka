#include <iostream>
using namespace std;

float Suma(float a, float b){
    return a+b;
}
int Suma(int c, int d){
    return c+d;
}

int main()
{
    float a,b;
    int c,d;
  

  cout << "Podaj dwie liczby ca³kowite: ";
  cin >> c >> d;

  cout << "Podaj dwie liczby zmiennoprzecinkowe: ";
  cin >> a >> b;
  cout << "Suma liczb ca³kowitych: " << Suma(c,d) << endl;
  cout << "Suma liczb zmiennoprzecinkowych: " << Suma(a,b) << endl;
}
