#include <SFML/Graphics.hpp>

using namespace sf;
int main()
{
	RenderWindow window(sf::VideoMode(1300, 800), "Wolf_Soul"); 



	Texture herotexture;
	herotexture.loadFromFile("images/hero.png");

	Texture healthbar;
	healthbar.loadFromFile("images/healthbar.png");
	
	Sprite herosprite;
	herosprite.setTexture(herotexture);
	herosprite.setPosition(100, 100);

	Sprite healthsprite;
	healthsprite.setTexture(healthbar);
	healthsprite.setPosition(50, 0);

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear();
		window.draw(herosprite);
		window.draw(healthsprite);
		window.display();
	}

	return 0;
}