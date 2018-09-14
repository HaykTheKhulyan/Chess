#include <SFML/Graphics.hpp>

void initializeBoard(sf::Sprite &board, sf::Texture &boardTexture, sf::RectangleShape &boardBorder, sf::Texture &pawn1Texture, sf::Texture &pawn2Texture, sf::Texture &knight1Texture, sf::Texture &knight2Texture, sf::Texture &bishop1Texture, sf::Texture &bishop2Texture, sf::Texture &rook1Texture, sf::Texture &rook2Texture, sf::Texture &queen1Texture, sf::Texture &queen2Texture, sf::Texture &king1Texture, sf::Texture &king2Texture);

int main() {
	sf::RenderWindow window(sf::VideoMode(1200, 800), "Chess", sf::Style::Close | sf::Style::Titlebar);

	sf::Sprite board;
	sf::Texture boardTexture;
	sf::RectangleShape boardBorder;

	sf::Texture pawn1Texture;
	sf::Texture pawn2Texture;
	sf::Texture knight1Texture;
	sf::Texture knight2Texture;
	sf::Texture bishop1Texture;
	sf::Texture bishop2Texture;
	sf::Texture rook1Texture;
	sf::Texture rook2Texture;
	sf::Texture queen1Texture;
	sf::Texture queen2Texture;
	sf::Texture king1Texture;
	sf::Texture king2Texture;

	initializeBoard(board, boardTexture, boardBorder, pawn1Texture, pawn2Texture, knight1Texture, knight2Texture, bishop1Texture, bishop2Texture, rook1Texture, rook2Texture, queen1Texture, queen2Texture, king1Texture, king2Texture);

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

void initializeBoard(sf::Sprite &board, sf::Texture &boardTexture, sf::RectangleShape &boardBorder, sf::Texture &pawn1Texture, sf::Texture &pawn2Texture, sf::Texture &knight1Texture, sf::Texture &knight2Texture, sf::Texture &bishop1Texture, sf::Texture &bishop2Texture, sf::Texture &rook1Texture, sf::Texture &rook2Texture, sf::Texture &queen1Texture, sf::Texture &queen2Texture, sf::Texture &king1Texture, sf::Texture &king2Texture) {
	boardTexture.loadFromFile("Resources/board.png");

	board.setTexture(boardTexture);
	board.setPosition(sf::Vector2f(100.0f, 100.0f));
	board.setScale(1.27118644f, 1.27118644f);

	boardBorder.setSize(sf::Vector2f(600.0f, 600.0f));
	boardBorder.setOrigin(sf::Vector2f(boardBorder.getSize().x / 2, boardBorder.getSize().y / 2));
	boardBorder.setFillColor(sf::Color::Transparent);
	boardBorder.setOutlineThickness(4.0f);
	boardBorder.setOutlineColor(sf::Color(170, 100, 39));
	boardBorder.setPosition(sf::Vector2f(400.0f, 400.0f));

	pawn1Texture.loadFromFile("Resources/pawn1.png");
	pawn2Texture.loadFromFile("Resources/pawn2.png");
	knight1Texture.loadFromFile("Resources/knight1.png");
	knight2Texture.loadFromFile("Resources/knight2.png");
	bishop1Texture.loadFromFile("Resources/bishop1.png");
	bishop2Texture.loadFromFile("Resources/bishop2.png");
	rook1Texture.loadFromFile("Resources/rook1.png");
	rook2Texture.loadFromFile("Resources/rook2.png");
	queen1Texture.loadFromFile("Resources/queen1.png");
	queen2Texture.loadFromFile("Resources/queen2.png");
	king1Texture.loadFromFile("Resources/king1.png");
	king2Texture.loadFromFile("Resources/king2.png");
}
