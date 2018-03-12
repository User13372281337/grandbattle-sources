#include <iostream>
#include <cstdlib>
#include <string>
#include <string.h>
#include <SFML/Graphics.hpp>
using namespace std;

void OnPlayerPrintText(string printtext) {
	
	if (printtext == "help")
	{
		cout << "If you want to play, write start_game" << endl;
		cout << "Project name - GrandBattle" << endl;
		cout << "Director - I. Karaman" << endl;
		cout << "World's designer - Y. Kalichak" << endl;
		cout << "Person's designer - I. Karaman & Y. Kalichak" << endl;
		cout << "Vehicle's designer - Y. Kalichak" << endl;
		cout << "Powered by Nothing copr." << endl;
		cout << "BETA EDITION" << endl;
	}
	if (printtext == "start_game")
	{
		sf::RenderWindow window(sf::VideoMode(1280, 800), "GrandBattle");
		sf::CircleShape shape(100.f);
		shape.setFillColor(sf::Color::Green);

		while (window.isOpen())
		{
			sf::Event event;
			while (window.pollEvent(event))
			{
				if (event.type == sf::Event::Closed)
					window.close();
			}

			window.clear();
			window.draw(shape);
			window.display();
		}
	}
}
int main(){
	string command;
	cout << "Enter Command" << endl;
	getline(cin, command);
	OnPlayerPrintText(command);
	system("pause");
	return 0;

	
}
