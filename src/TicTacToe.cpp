#include <SFML/Graphics.hpp>

using namespace sf;
int main()
{
    RenderWindow * fenetre = new RenderWindow(VideoMode(1000, 1000), "SFML !");
    while (fenetre->isOpen())
    {
        Event evenement;
        while (fenetre->pollEvent(evenement))
        {
            if (evenement.type == Event::Closed)
                fenetre->close();
        }
        fenetre->clear();
        fenetre->display();
    }
    return 0;
}

