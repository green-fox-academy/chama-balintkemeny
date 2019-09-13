#include <iostream>
using namespace std;
void appendAFunc (string& x);

int main() {
    string typo = "Chinchill";
    appendAFunc(typo);
    cout << typo << endl;
    return 0;
}

void appendAFunc (string& x) {
    x += "a";
}