/*
 * PageGrilleDeJeu.h
 */

#ifndef PAGEGRILLEDEJEU_H_
#define PAGEGRILLEDEJEU_H_

#include <SFML/Graphics.hpp>
using namespace sf;

class PageGrilleDeJeu {

protected:
	RectangleShape caseBlanche;
	RectangleShape zoneNom;
	Text nomX;
	Font * fonte;
	RenderWindow* fenetre;
public:
	PageGrilleDeJeu(RenderWindow* fenetre);
	void afficher();
	virtual ~PageGrilleDeJeu();
	constexpr int TAILLE_CASE = 100;
	constexpr int DECALAGE_GRILLE_X = 250;
	constexpr int DECALAGE_GRILLE_Y = 200;
};

#endif /* PAGEGRILLEDEJEU_H_ */
