#include <iostream>
using namespace std;

int main(){
	/* Inkrementacja 
	i = i + 1
	i += 1
	1++
	Dekrementacja 
	i = i - 1
	i -= 1
	1--
	for(wartoscpoczatkowa; warunekkonczac; krok)

*/

for(int i = 0; i < 10; i += 2){
	cout << i << endl;
	
}

// petla zagniedzona
for(int i = 0; i < 6; i++){
	for(int j= 0; j < 3; j++){
		cout << "*";
		
	}
	cout << endl;
}



}