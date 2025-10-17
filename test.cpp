#include <iostream>
using namespace std;

int main() {
    string word = "";
    cin >> word;
    bool oneOp = false;
    bool zeroOp = false;

    for (int i = 0; i < word.length(); i++) {
        if (word.substr(i, 2) == "lv") {  // check two-character substring
            zeroOp = true;
            break;
        }
        else if (word.substr(i, 1) == "l" || word.substr(i, 1) == "v") {
            oneOp = true;
        }
    }

    if (zeroOp) {
        cout << 0;
    }
    else if (oneOp) {
        cout << 1;
    }
    else {
        cout << 2;
    }
    return 0;
}
