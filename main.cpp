#include <iostream>
#include <stdint.h>
#include <stdio.h>

using namespace std;

bool is_exit(const string& input) {
    return input == "exit";
}

string input_scanner(string &input) {

    cout << "=> ";

    getline(cin, input);

    return input;
}

float hexadecimalToDecimal(const char *hexadecimal_string) {
    uint32_t number;
    sscanf(hexadecimal_string, "%x", &number);  // assuming you checked input
    return *((float*)&number);
}

string input_parser(string &input) {

    cout << "=> ";

    getline(cin, input);

    return input;
}

void calculator() {
    string input;
    while (! is_exit(input)) {
        input_scanner(input);
    }
}

int main() {

    calculator();
    return 0;
}
