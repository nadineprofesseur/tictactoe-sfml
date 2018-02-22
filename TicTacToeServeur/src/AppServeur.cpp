
// https://www.sfml-dev.org/tutorials/2.4/network-socket.php
#include <SFML/Network.hpp>
#include <iostream>

using namespace sf;
int main()
{
	static int PORT = 2000;
	TcpListener ecouteur;
	TcpSocket connexion;

	if (ecouteur.listen(PORT) != Socket::Done)
	{
	}
	if (ecouteur.accept(connexion) != Socket::Done)
	{
	}

	std::cout << "Connexion acceptee " << std::endl;
}
