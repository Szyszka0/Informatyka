#include <iostream>
using namespace std;

float Suma(float a, float b){
    return a+b;
}
float Suma(float a, int b){
    return a+b;
}
int Suma(int a,int b){
    return a+b;
}
float Suma(int a,float b){
    return a+b;
}
int main()
{
    float a,b;
    cout << "Podaj 1 liczbe: ";
    cin >> a;
    cout << "Podaj 2 liczbe: ";
    cin >> b;
    cout << "Suma: " << Suma(a,b);
}
   
