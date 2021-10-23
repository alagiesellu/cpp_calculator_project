grammar calculator;

EQ : '=';

function : COS | SIN;

COS : 'cos';

SIN : 'sin';

BOPEN : '(';

BCLOSE : ')';

PLUS : '+';

MINUS : '-';

TIMES : '*';

DIV : '/';

VARIABLE : VALID_ID_START VALID_ID_CHAR*;


fragment VALID_ID_START : ('a' .. 'z') | ('A' .. 'Z') | '_';


fragment VALID_ID_CHAR : VALID_ID_START | ('0' .. '9');