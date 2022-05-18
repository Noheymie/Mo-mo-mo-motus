#pragma once

#include "clavier.h"

// état b = basique, état g = gris, état j = jaune, état r = rouge

void initClavier(Touche clavier[26]) {

	clavier[0].lettre = "a";
	clavier[0].etat = 'b';

	clavier[1].lettre = "b";
	clavier[1].etat = 'b';

	clavier[2].lettre = "c";
	clavier[2].etat = 'b';

	clavier[3].lettre = "d";
	clavier[3].etat = 'b';

	clavier[4].lettre = "e";
	clavier[4].etat = 'b';

	clavier[5].lettre = "f";
	clavier[5].etat = 'b';

	clavier[6].lettre = "g";
	clavier[6].etat = 'b';

	clavier[7].lettre = "h";
	clavier[7].etat = 'b';

	clavier[8].lettre = "i";
	clavier[8].etat = 'b';

	clavier[9].lettre = "j";
	clavier[9].etat = 'b';

	clavier[10].lettre = "k";
	clavier[10].etat = 'b';

	clavier[11].lettre = "l";
	clavier[11].etat = 'b';

	clavier[12].lettre = "m";
	clavier[12].etat = 'b';

	clavier[13].lettre = "n";
	clavier[13].etat = 'b';

	clavier[14].lettre = "o";
	clavier[14].etat = 'b';

	clavier[15].lettre = "p";
	clavier[15].etat = 'b';

	clavier[16].lettre = "q";
	clavier[16].etat = 'b';

	clavier[17].lettre = "r";
	clavier[17].etat = 'b';

	clavier[18].lettre = "s";
	clavier[18].etat = 'b';

	clavier[19].lettre = "t";
	clavier[19].etat = 'b';

	clavier[20].lettre = "u";
	clavier[20].etat = 'b';

	clavier[21].lettre = "v";
	clavier[21].etat = 'b';

	clavier[22].lettre = "w";
	clavier[22].etat = 'b';

	clavier[23].lettre = "x";
	clavier[23].etat = 'b';

	clavier[24].lettre = "y";
	clavier[24].etat = 'b';

	clavier[25].lettre = "z";
	clavier[25].etat = 'b';
}

void changeEtat(Touche clavier[26], char l, char e) {
	for (int j = 0; j < 26; j++) {
		if (clavier[j].lettre == &l) {
			if (clavier[j].etat == 'j' || clavier[j].etat == 'b')
				clavier[j].etat = e;
		}
	}
}
