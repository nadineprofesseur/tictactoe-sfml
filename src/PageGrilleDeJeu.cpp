/*
 * PageGrilleDeJeu.cpp
 */

#include "PageGrilleDeJeu.h"

PageGrilleDeJeu::PageGrilleDeJeu(RenderWindow* fenetre) {
	caseBlanche.setSize(sf::Vector2f(100, 100));
	caseBlanche.setOutlineColor(sf::Color::White);
	caseBlanche.setOutlineThickness(5);
	caseBlanche.setPosition(100, 100);
	this->fenetre = fenetre;
}

PageGrilleDeJeu::~PageGrilleDeJeu() {
}

void PageGrilleDeJeu::afficher() {
	this->fenetre->draw(this->caseBlanche);
}
