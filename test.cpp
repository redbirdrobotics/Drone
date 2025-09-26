//this doesnt work I was just messing around with a kattis problem

#include <iostream>

using namespace std;

int main(){
    string word = "";
    cin >> word;
    bool oneOp = false;
    bool zeroOp = false;
    bool twoOp = false;
    for (int i = 0; i < word.length(); i++){
        if (word.substr(i, i + 1).compare("l") == 0 or word.substr(i, i + 1).compare("v") == 0){
            oneOp = true;
        }
        else if (word.substr(i, i + 2).compare("lv") == 0){
            zeroOp = true;
            break;
        }
        else if (i == word.length()){
            twoOp = true;
        }
    }
    if (zeroOp){
        cout << 0;
        return 0;
    }
    else if (oneOp){
        cout << 1;
        return 0;
    }
    else{
        cout << 2;
        return 0;
    }
}
