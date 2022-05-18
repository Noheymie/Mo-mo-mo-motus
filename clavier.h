#ifndef clavier_h
#define clavier_h

typedef struct {
	const char* lettre;
	char etat;
}Touche;

void initClavier(Touche clavier[26]);
void changeEtat(Touche clavier[26], char l, char e);

#endif 
