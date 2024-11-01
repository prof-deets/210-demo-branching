#include <iostream>
using namespace std;

void first_function(string);
void second_function(string);

int main() {
    string str = "COMSC-210";

    // section 1
    first_function(str);

    // section 2
    second_function(str);

    // section 3

    return 0;
}

void first_function(string s) {
    cout << s << endl;
}

void second_function(string s) {
    cout << "in f2: " << s << endl;
}