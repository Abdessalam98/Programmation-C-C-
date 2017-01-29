#include <iostream>
using namespace std;

int main () {

double longueur, largeur, perimetre, surface;

cout << "Saisissez la longueur du rectangle\n"; cin >> longueur;
cout << "Saisissez la largeur du rectangle\n"; cin >> largeur;
perimetre=2*(longueur+largeur);
surface=longueur*largeur;
cout <<"Le perimetre vaut: " << perimetre << endl;
cout <<"La surface vaut: "<< surface <<endl;
cout <<"Appuyez sur une touche pour continuer..." << endl;
cin.ignore();
cin.get();
return 0;
}