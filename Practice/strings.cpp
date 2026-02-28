#include <iostream>
#include <string>
using namespace std;

int main() {

    string name = "Monish";
    cout << "Name: " << name << endl;
    cout << "Length: " << name.length() << endl;

    string fullName;
    cout << "Enter full name: ";
    getline(cin, fullName);
    cout << "You entered: " << fullName << endl;

    string str1 = "Hello";
    string str2 = "World";
    string result = str1 + " " + str2;
    cout << "Combined: " << result << endl;

    cout << "First char: " << str1[0] << endl;
    cout << "Last char: " << str1[str1.length()-1] << endl;

    if(str1 == str2) {
        cout << "Same" << endl;
    } else {
        cout << "Different" << endl;
    }

    string original = "BMSCE";
    string reversed = "";
    for (int i = original.length()-1; i >= 0; i--) {
        reversed += original[i];
    }
    cout << "Original: " << original << endl;
    cout << "Reversed: " << reversed << endl;

    return 0;
}