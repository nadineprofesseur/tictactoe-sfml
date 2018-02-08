/*
 * PageGrilleDeJeu.h
 */

#define TAILLE_CASE 100
#define DECALAGE_GRILLE_X 250
#define DECALAGE_GRILLE_Y 200

#ifndef PAGEGRILLEDEJEU_H_
#define PAGEGRILLEDEJEU_H_

#include <SFML/Graphics.hpp>
using namespace sf;

class PageGrilleDeJeu {

protected:
	RectangleShape caseBlanche;
	RectangleShape zoneNom;
	RenderWindow* fenetre;
public:
	PageGrilleDeJeu(RenderWindow* fenetre);
	void afficher();
	virtual ~PageGrilleDeJeu();
};

#endif /* PAGEGRILLEDEJEU_H_ */
