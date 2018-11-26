#include <SFML/Graphics.hpp>
#include "Piece.h"

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

	Piece pieces [32];

	Piece whitePawn1(&pawn1Texture, 5, true);
	Piece whitePawn2(&pawn1Texture, 5, true);
	Piece whitePawn3(&pawn1Texture, 5, true);
	Piece whitePawn4(&pawn1Texture, 5, true);
	Piece whitePawn5(&pawn1Texture, 5, true);
	Piece whitePawn6(&pawn1Texture, 5, true);
	Piece whitePawn7(&pawn1Texture, 5, true);
	Piece whitePawn8(&pawn1Texture, 5, true);

	Piece blackPawn1(&pawn2Texture, 5, false);
	Piece blackPawn2(&pawn2Texture, 5, false);
	Piece blackPawn3(&pawn2Texture, 5, false);
	Piece blackPawn4(&pawn2Texture, 5, false);
	Piece blackPawn5(&pawn2Texture, 5, false);
	Piece blackPawn6(&pawn2Texture, 5, false);
	Piece blackPawn7(&pawn2Texture, 5, false);
	Piece blackPawn8(&pawn2Texture, 5, false);

	Piece whiteKing(&king1Texture, 0, true);
	Piece blackKing(&king2Texture, 0, false);

	Piece whiteQueen(&queen1Texture, 1, true);
	Piece blackQueen(&queen2Texture, 1, false);

	Piece whiteRook1(&rook1Texture, 2, true);
	Piece whiteRook2(&rook1Texture, 2, true);
	Piece blackRook1(&rook2Texture, 2, false);
	Piece blackRook2(&rook2Texture, 2, false);

	Piece whiteBishop1(&bishop1Texture, 3, true);
	Piece whiteBishop2(&bishop1Texture, 3, true);
	Piece blackBishop1(&bishop2Texture, 3, false);
	Piece blackBishop2(&bishop2Texture, 3, false);

	Piece whiteKnight1(&knight1Texture, 4, true);
	Piece whiteKnight2(&knight1Texture, 4, true);
	Piece blackKnight1(&knight2Texture, 4, false);
	Piece blackKnight2(&knight2Texture, 4, false);

	whitePawn1.setPosition(sf::Vector2f(137.0f, 587.0f));
	whitePawn2.setPosition(sf::Vector2f(212.0f, 587.0f));
	whitePawn3.setPosition(sf::Vector2f(287.0f, 587.0f));
	whitePawn4.setPosition(sf::Vector2f(362.0f, 587.0f));
	whitePawn5.setPosition(sf::Vector2f(437.0f, 587.0f));
	whitePawn6.setPosition(sf::Vector2f(512.0f, 587.0f));
	whitePawn7.setPosition(sf::Vector2f(587.0f, 587.0f));
	whitePawn8.setPosition(sf::Vector2f(662.0f, 587.0f));
											  
	blackPawn1.setPosition(sf::Vector2f(137.0f, 210.0f));
	blackPawn2.setPosition(sf::Vector2f(212.0f, 210.0f));
	blackPawn3.setPosition(sf::Vector2f(287.0f, 210.0f));
	blackPawn4.setPosition(sf::Vector2f(362.0f, 210.0f));
	blackPawn5.setPosition(sf::Vector2f(437.0f, 210.0f));
	blackPawn6.setPosition(sf::Vector2f(512.0f, 210.0f));
	blackPawn7.setPosition(sf::Vector2f(587.0f, 210.0f));
	blackPawn8.setPosition(sf::Vector2f(662.0f, 210.0f));

	whiteKing.setPosition(sf::Vector2f(437.0f, 662.0f));
	blackKing.setPosition(sf::Vector2f(437.0f, 135.0f));
	
	whiteQueen.setPosition(sf::Vector2f(367.0f, 662.0f));
	blackQueen.setPosition(sf::Vector2f(367.0f, 135.0f));
	
	whiteRook1.setPosition(sf::Vector2f(137.0f, 662.0f));
	whiteRook2.setPosition(sf::Vector2f(662.0f, 662.0f));
	blackRook1.setPosition(sf::Vector2f(137.0f, 135.0f));
	blackRook2.setPosition(sf::Vector2f(662.0f, 135.0f));
	
	whiteBishop1.setPosition(sf::Vector2f(292.0f, 662.0f));
	whiteBishop2.setPosition(sf::Vector2f(512.0f, 662.0f));
	blackBishop1.setPosition(sf::Vector2f(292.0f, 135.0f));
	blackBishop2.setPosition(sf::Vector2f(512.0f, 135.0f));
	
	whiteKnight1.setPosition(sf::Vector2f(212.0f, 662.0f));
	whiteKnight2.setPosition(sf::Vector2f(587.0f, 662.0f));
	blackKnight1.setPosition(sf::Vector2f(212.0f, 135.0f));
	blackKnight2.setPosition(sf::Vector2f(587.0f, 135.0f));

	whiteKing.setPosition(sf::Vector2f(437.0f, 662.0f));
	blackKing.setPosition(sf::Vector2f(437.0f, 135.0f));

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

		whitePawn1.Draw(window);
		whitePawn2.Draw(window);
		whitePawn3.Draw(window);
		whitePawn4.Draw(window);
		whitePawn5.Draw(window);
		whitePawn6.Draw(window);
		whitePawn7.Draw(window);
		whitePawn8.Draw(window);

		blackPawn1.Draw(window);
		blackPawn2.Draw(window);
		blackPawn3.Draw(window);
		blackPawn4.Draw(window);
		blackPawn5.Draw(window);
		blackPawn6.Draw(window);
		blackPawn7.Draw(window);
		blackPawn8.Draw(window);

		whiteKing.Draw(window);
		blackKing.Draw(window);

		whiteQueen.Draw(window);
		blackQueen.Draw(window);

		whiteBishop1.Draw(window);
		whiteBishop2.Draw(window);
		blackBishop1.Draw(window);
		blackBishop2.Draw(window);

		whiteKnight1.Draw(window);
		whiteKnight2.Draw(window);
		blackKnight1.Draw(window);
		blackKnight2.Draw(window);

		whiteRook1.Draw(window);
		whiteRook2.Draw(window);
		blackRook1.Draw(window);
		blackRook2.Draw(window);

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
