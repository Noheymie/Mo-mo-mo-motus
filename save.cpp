#include <iostream>
#include <fstream>

using namespace std;


void save(ofstream &flux, int n, int essai, bool v)
{
	flux << "Partie " << n << " : "<< endl;
	flux << "Nombre d'essais : " << essai << endl;
	string victoire;
	if (v)
		victoire = "Victoire";
	else
		victoire = "Défaite";
	flux << victoire << endl;
	flux << "-----------------------------------------------"<< endl;
}

int main() {

	ofstream flux("historique.txt");
	flux << "Historique des parties" << endl << endl;

	save(flux, 1, 5, true);
	save(flux, 2, 6, false);

	flux.close();
}
