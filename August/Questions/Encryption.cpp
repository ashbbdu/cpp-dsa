#include <iostream>
#include <string>
using namespace std;

string encrypt(const string& text) {
    string encrypted = "";
    int n = text.length();

    for (int i = 0; i < n; i++) {
        int count = 1;
     while (i + 1 < n && text[i] == text[i + 1]) {
            count++;
            i++;
        }
        if (count > 1) {
            encrypted += to_string(count) + text[i];
        } else {
            encrypted += text[i];
        }
    }

    return encrypted;
}

int main() {
    string input1 = "zzfwwr";
    string input2 = "zzzzzz";

    cout << "Encrypted form of " << input1 << " is " << encrypt(input1) << endl;
    cout << "Encrypted form of " << input2 << " is " << encrypt(input2) << endl;

    return 0;
}
