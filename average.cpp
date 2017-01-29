#include <iostream>
using namespace std;

int main() {
	int a, x=0;
	cout << "Saisissez la valeur du premier nombre \n"; cin >> a; x=x+a;
	cout << "Saisissez la valeur du deuxieme nombre \n"; cin >> a; x=x+a;
	cout << "Saisissez la valeur du troisieme nombre \n"; cin >> a; x=x+a;
	cout << "Saisissez la valeur du quatrieme nombre \n"; cin >> a; x=x+a;
	cout << "Saisissez la valeur du cinquieme nombre \n"; cin >> a; x=x+a;
	x=x/5;
	cout << "La moyenne des cinq nombres saisis est :" << x << endl;
	cout << "Appuyez sur une touche pour continuer...";
	cin.ignore();
	cin.get();
	return 0;
}