#include <iostream>
using namespace std;
int main(){
	int a,b,c;
	cout << "Saisissez la valeur de a \n"; cin >> a;
	cout << "Saisissez la valeur de b \n"; cin >> b;
	c=a;
	a=b;
	b=c;
	cout << "La nouvelle valeur de a est : " << a << endl;
	cout << "La nouvelle valeur de b est : " << b << endl;
	cout << "Appuyez sur une touche pour continuer..." << endl;
	cin.ignore();
	cin.get();
	return 0;
}
