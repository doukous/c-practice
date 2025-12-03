typedef enum {
    Pawn, Knight,
    Bishop, Rook,
    Queen, King,
    Empty
} Piece;

typedef enum {
    Black,
    White,
} Color;

typedef struct {
    Piece piece;
    Color color;
} Square;

Square board[8][8] = {
    {{Rook, Black}, {Knight, Black}, {Bishop, Black}, {Queen, Black}, {King, Black}, {Bishop, Black}, {Knight, Black}, {Rook, Black}},
    {{Pawn, Black}, {Pawn, Black},  {Pawn, Black}, {Pawn, Black}, {Pawn, Black}, {Pawn, Black}, {Pawn, Black}, {Pawn, Black}},
    {{Empty, Black}, {Empty, Black}, {Empty, Black}, {Empty, Black}, {Empty, Black}, {Empty, Black}, {Empty, Black}, {Empty, Black}},
    {{Empty, Black}, {Empty, Black}, {Empty, Black}, {Empty, Black}, {Empty, Black}, {Empty, Black}, {Empty, Black}, {Empty, Black}},
    {{Empty, Black}, {Empty, Black}, {Empty, Black}, {Empty, Black}, {Empty, Black}, {Empty, Black}, {Empty, Black}, {Empty, Black}},
    {{Empty, Black}, {Empty, Black}, {Empty, Black}, {Empty, Black}, {Empty, Black}, {Empty, Black}, {Empty, Black}, {Empty, Black}},
    {{Pawn, White}, {Pawn, White},  {Pawn, White}, {Pawn, White}, {Pawn, White}, {Pawn, White}, {Pawn, White}, {Pawn, White}},
    {{Rook, White}, {Knight, White}, {Bishop, White}, {Queen, White}, {King, White}, {Bishop, White}, {Knight, White}, {Rook, White}},
};
