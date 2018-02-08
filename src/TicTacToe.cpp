#include <SFML/Graphics.hpp>
#include "PageGrilleDeJeu.h"

using namespace sf;
int main()
{
    RenderWindow * fenetre = new RenderWindow(VideoMode(800, 800), "SFML !");
    PageGrilleDeJeu * pageGrilleDeJeu = new PageGrilleDeJeu(fenetre);
    while (fenetre->isOpen())
    {
        Event evenement;
        while (fenetre->pollEvent(evenement))
        {
            if (evenement.type == Event::Closed)
                fenetre->close();
        }
        fenetre->clear();
        pageGrilleDeJeu->afficher();
        fenetre->display();
    }
    return 0;
}

