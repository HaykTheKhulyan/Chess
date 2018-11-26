#pragma once
#include <SFML\Graphics.hpp>

/*
	king-0
	queen-1
	rook-2
	bishop-3
	knight-4
	pawn-5
*/

class Piece {
public:
	Piece();
	Piece(sf::Texture * texture, int pieceType, bool pieceIsWhite);
	~Piece();


	int pieceType;
	bool pieceIsWhite;

	void Draw(sf::RenderWindow &window);
	void setPosition(sf::Vector2f position);

private:
	sf::RectangleShape piece;
};

