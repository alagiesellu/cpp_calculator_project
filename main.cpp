#include <iostream>
using namespace std;

string scanner(string &input) {

    cout << endl << "=> ";

    getline(cin, input);

    return input;
}

bool is_exit(const string& input) {
    return input == "exit";
}

void calculator() {
    string input;
    while (! is_exit(input)) {
        scanner(input);
    }
}

int main() {

    calculator();
    return 0;
}
