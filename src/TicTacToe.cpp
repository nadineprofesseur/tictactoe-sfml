#include <SFML/Graphics.hpp>
int main()
{
    sf::RenderWindow fenetre(sf::VideoMode(200, 200), "SFML !");
    sf::CircleShape cercle(100.f);
    cercle.setFillColor(sf::Color::Green);
    while (fenetre.isOpen())
    {
        sf::Event evenement;
        while (fenetre.pollEvent(evenement))
        {
            if (evenement.type == sf::Event::Closed)
                fenetre.close();
        }
        fenetre.clear();
        fenetre.draw(cercle);
        fenetre.display();
    }
    return 0;
}
