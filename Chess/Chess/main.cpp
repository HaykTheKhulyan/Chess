#include <SFML/Graphics.hpp>

int main() {
	sf::RenderWindow window(sf::VideoMode(1200, 800), "Chess", sf::Style::Close | sf::Style::Titlebar);

	sf::Texture boardTexture;
	boardTexture.loadFromFile("Resources/board.png");
	
	sf::Sprite board;
	board.setTexture(boardTexture);
	board.setPosition(sf::Vector2f(100.0f, 100.0f));
	board.setScale(1.27118644f, 1.27118644f);

	sf::RectangleShape boardBorder;
	boardBorder.setSize(sf::Vector2f(600.0f, 600.0f));
	boardBorder.setOrigin(sf::Vector2f(boardBorder.getSize().x / 2, boardBorder.getSize().y / 2));
	boardBorder.setFillColor(sf::Color::Transparent);
	boardBorder.setOutlineThickness(4.0f);
	boardBorder.setOutlineColor(sf::Color::Black);
	//debugging
	//sf::Vector2f var1 = sf::Vector2f(board.getPosition() + sf::Vector2f(600.0f, 600.0f));
	boardBorder.setPosition(sf::Vector2f(400.0f, 400.0f));

	float deltaTime = 0.0f;
	sf::Clock clock;

	while (window.isOpen()) {
		deltaTime += clock.restart().asSeconds();

		sf::Event event;
		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed) {
				window.close();
			}
			if (event.type == sf::Event::KeyPressed) {
				if (event.key.code == sf::Keyboard::Escape) {
					window.close();
				}
			}
		}

		window.clear(sf::Color::White);

		window.draw(board);
		window.draw(boardBorder);

		window.display();
	}
	return 0;
}