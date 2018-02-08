/*
 * PageGrilleDeJeu.cpp
 */

#include "PageGrilleDeJeu.h"

PageGrilleDeJeu::PageGrilleDeJeu(RenderWindow* fenetre) {
	caseBlanche.setSize(sf::Vector2f(TAILLE_CASE-5, TAILLE_CASE-5));
	caseBlanche.setOutlineColor(Color::Red);
	caseBlanche.setOutlineThickness(5);
	this->fenetre = fenetre;
}

PageGrilleDeJeu::~PageGrilleDeJeu() {
}

void PageGrilleDeJeu::afficher() {
	for(int colonne = 0; colonne < 3; colonne++)
	{
		caseBlanche.setPosition(colonne*TAILLE_CASE + DECALAGE_GRILLE_X, DECALAGE_GRILLE_Y);
		this->fenetre->draw(this->caseBlanche);
	}
}
