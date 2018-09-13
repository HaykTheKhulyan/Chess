#pragma once
#include <SFML\Graphics.hpp>

class Piece {
public:
	Piece(sf::Texture * texture, int pieceType, bool pieceIsWhite);
	~Piece();


	int pieceType;
	bool pieceIsWhite;

private:
	sf::Sprite piece;
};

