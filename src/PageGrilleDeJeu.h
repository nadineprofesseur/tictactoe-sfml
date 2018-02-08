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
	RenderWindow* fenetre;
public:
	PageGrilleDeJeu(RenderWindow* fenetre);
	void afficher();
	virtual ~PageGrilleDeJeu();
};

#endif /* PAGEGRILLEDEJEU_H_ */
