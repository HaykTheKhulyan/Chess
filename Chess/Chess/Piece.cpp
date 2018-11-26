#include "Piece.h"
#include <SFML\Graphics.hpp>

/*
king-0
queen-1
rook-2
bishop-3
knight-4
pawn-5
*/

Piece::Piece() {

}

Piece::Piece(sf::Texture * texture, int pieceType, bool pieceIsWhite) {
	piece.setTexture(texture);
	piece.setSize(sf::Vector2f(65.0f, 65.0f));
	piece.setOrigin(piece.getSize() / 2.0f);
	piece.setPosition(sf::Vector2f(0.0f, 0.0f));
	this->pieceType = pieceType;
	this->pieceIsWhite = pieceIsWhite;
}

Piece::~Piece() {
}

void Piece::Draw(sf::RenderWindow & window) {
	window.draw(piece);
}

void Piece::setPosition(sf::Vector2f position) {
	piece.setPosition(position);
}
