/*
 * PageGrilleDeJeu.cpp
 */

#include "PageGrilleDeJeu.h"

PageGrilleDeJeu::PageGrilleDeJeu(RenderWindow* fenetre) {
	this->fenetre = fenetre;
	caseBlanche.setSize(Vector2f(TAILLE_CASE-5, TAILLE_CASE-5));
	caseBlanche.setOutlineColor(Color::Red);
	caseBlanche.setOutlineThickness(5);
	zoneNom.setSize(Vector2f(200,50));
}

PageGrilleDeJeu::~PageGrilleDeJeu() {
}

void PageGrilleDeJeu::afficher() {

	zoneNom.setPosition(50,50);
	this->fenetre->draw(zoneNom);
	zoneNom.setPosition(550,50);
	this->fenetre->draw(zoneNom);

	for(int colonne = 0; colonne < 3; colonne++)
	{
		for(int rangee = 0; rangee < 3; rangee++)
		{
			caseBlanche.setPosition(colonne*TAILLE_CASE + DECALAGE_GRILLE_X, rangee*TAILLE_CASE + DECALAGE_GRILLE_Y);
			this->fenetre->draw(this->caseBlanche);
		}
	}
}
