grammar calculator;

equation
   : expression relop expression
   ;

expression
   : multiplyingExpression ((PLUS | MINUS) multiplyingExpression)*
   ;

multiplyingExpression
   : powExpression ((TIMES | DIV) powExpression)*
   ;

powExpression
   : signedAtom (POW signedAtom)*
   ;

signedAtom
   : PLUS signedAtom
   | MINUS signedAtom
   | func_
   | atom
   ;

atom
   : scientific
   | variable
   | parentices
   ;

variable
   : VARIABLE
   ;

scientific
   : SCIENTIFIC_NUMBER
   ;

parentices
   : LPAREN expression RPAREN
   ;

func_
   : funcname parentices
   ;

funcname
   : COS
   | SIN
   ;

relop
   : EQ
   ;


COS
   : 'cos'
   ;


SIN
   : 'sin'
   ;


LPAREN
   : '('
   ;


RPAREN
   : ')'
   ;


PLUS
   : '+'
   ;


MINUS
   : '-'
   ;


TIMES
   : '*'
   ;


DIV
   : '/'
   ;

EQ
   : '='
   ;

POW
   : '^'
   ;


VARIABLE
   : VALID_ID_CHAR+
   ;


fragment VALID_ID_CHAR
   : ('a' .. 'z') | ('A' .. 'Z')
   ;


SCIENTIFIC_NUMBER
   : NUMBER | HEXADECIMAL_NUMBER | BINARY_NUMBER
   ;


fragment NUMBER
   : ('0' .. '9')+ ('.' ('0' .. '9') +)?
   ;


fragment HEXADECIMAL_NUMBER
   : '0x' ('0' | '9' | 'A' | 'F') +
   ;


fragment BINARY_NUMBER
   : ('0' | '1')+ 'b'
   ;


WS
   : [ \r\n\t] + -> skip
   ;
