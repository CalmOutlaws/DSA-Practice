#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string a;
    cin >> a;
    string b;
    cin >> b;
    int l_a = a.size();
    int l_b = b.size();
    cout << l_a << " " << l_b << endl;
    string c;
    c =  a + b;
    cout << c << endl;
    swap(a[0], b[0]);
    cout << a << " " << b << endl;
    return 0;
}
