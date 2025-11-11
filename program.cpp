#include <iostream>
using namespace std;

int main(){
	int x;
	cin >> x;
	cout << endl;

	if(x<0){
		cout << "Blad: wczytana liczba jest ujemna!!!!" << endl;
		return 0;
	}

	cout << "Wczytana liczba: " << x << endl;
	
	return 0;
}
