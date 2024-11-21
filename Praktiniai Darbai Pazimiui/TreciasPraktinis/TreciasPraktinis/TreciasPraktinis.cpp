#include <iostream>
#include <string>
#include <clocale>
using namespace std;

char abecele[32] = { 'a', '�', 'b', 'c', '�', 'd', 'e', '�', '�', 'f', 'g', 'h', 'i', '�', 'y', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'r', 's', '�', 't', 'u', '�', '�', 'v', 'z', '�' };

string replaceLetters(const string& text) {
    string replacedText = "";

    for (char c : text) {
        bool found = false;
        for (int i = 0; i < 32; i++) {
            if (c == abecele[i]) {
                int newIndex = (i + 1) % 32;
                replacedText += abecele[newIndex];
                found = true;
                break;
            }
        }
        if (!found) {
            replacedText += c;
        }
    }
    return replacedText;
}

int main() {
    setlocale(LC_ALL, "Lithuanian");

    string text;

    cout << "Enter text: ";
    getline(cin, text);

    string replacedText = replaceLetters(text);
    cout << "Result: " << replacedText << endl;

    return 0;
}
