#include "Piece.h"
#include <SFML\Graphics.hpp>


Piece::Piece(sf::Texture * texture, int pieceType, bool pieceIsWhite) {
	piece.setTexture(*texture);
	this->pieceType = pieceType;
	this->pieceIsWhite = pieceIsWhite;
}

Piece::~Piece() {
}
