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
	fonte = new Font();
	fonte->loadFromFile("Debug/Junction.otf");
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
	nomO.setFont(*fonte);
	nomO.setPosition(50 + 10,50);
	nomO.setCharacterSize(40);
	nomO.setStyle(Text::Bold | Text::Regular);
	nomO.setColor(Color::Red);

	nomX.setFont(*fonte);
	nomX.setPosition(550 + 10,50);
	nomX.setCharacterSize(40);
	nomX.setStyle(Text::Bold | Text::Regular);
	nomX.setColor(Color::Red);

}


// TODO : redimensionner les textes selon la longueur
void PageGrilleDeJeu::afficherNomO(std::string nom) {
	nomO.setString(nom);
	this->fenetre->draw(nomO);
}
// TODO : redimensionner les textes selon la longueur
void PageGrilleDeJeu::afficherNomX(std::string nom) {
	nomX.setString(nom);
	this->fenetre->draw(nomX);
}
