#include <SFML/Graphics.hpp>
#include "PageGrilleDeJeu.h"
// https://www.sfml-dev.org/tutorials/2.4/network-socket.php
#include <SFML/Network.hpp>
#include <iostream>

using namespace sf;
int main()
{
	static int PORT = 2000;
	static IpAddress HOTE = "127.0.0.1";
	TcpSocket connexion;
	Socket::Status status = connexion.connect(HOTE, PORT);
	if (status != sf::Socket::Done)
	{
	}
	/*
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
        pageGrilleDeJeu->afficherNomO("Nadine");
        pageGrilleDeJeu->afficherNomX("Sophie");
        fenetre->display();
    }*/
    return 0;
}

