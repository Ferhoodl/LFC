#include <stdio.h>
#include <stdint.h>
#define START_FEN "rnbqkbnr/pppppppp/8/8/8/8/PPPPPPPP/RNBQKBNR w KQkq - 0 1"

enum pieces : uint8_t{
	W_KING,
	W_QUEEN,
	W_ROOK,
	W_BISHOP,
	W_KNIGHT,
	W_PAWN,
	B_KING,
	B_QUEEN,
	B_ROOK,
	B_BISHOP,
	B_KNIGHT,
	B_PAWN
};

enum castlingAbility : uint8_t{
	WHITE_KINGSIDE,
	WHITE_QUEENSIDE,
	WHITE_BOTH,
	BLACK_KINGSIDE,
	BLACK_QUEENSIDE,
	BLACK_BOTH
};

enum activePiece : uint8_t{
	WHITE,
	BLACK
};

enum enPassBitManips : uint8_t{
	C1 = 0x80,
	C2 = 0x40,
	C3 = 0x20,
	C4 = 0x10,
	C5 = 0x08,
	C6 = 0x04,
	C7 = 0x02,
	C8 = 0x01
};


struct state{
	uint8_t board[12][12];
	uint8_t activeColor;
	uint8_t whiteCastlingAbility;
	uint8_t blackCastlingAbility;
	
};

int main(){
	
}
