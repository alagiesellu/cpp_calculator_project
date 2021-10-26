#include <iostream>
#include "CalculatorLexer.h"
#include "CalculatorParser.h"
#include "antlr4-runtime.h"

using namespace std;

void engine(string &inputString) {

    // Provide the input text in a stream
    antlr4::ANTLRInputStream input(inputString);

    // Create a lexer from the input
    CalculatorLexer lexer(&input);

    // Create a token stream from the lexer
    antlr4::CommonTokenStream tokens(&lexer);

    // Create a parser from the token stream
    CalculatorParser parser(&tokens);

    // Display the parse tree
    std::cout << parser.expression()->toStringTree() << std::endl;
}

bool is_exit(const string& input) {
    return input == "exit";
}

string input_scanner(string &input) {

    getline(cin, input);

    return input;
}

void calculator() {
    string input;
    while (! is_exit(input)) {
        input_scanner(input);
        engine(input);
    }
}

int main() {

    calculator();
    return 0;
}
