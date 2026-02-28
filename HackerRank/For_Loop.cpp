#include <iostream>
using namespace std;
static const string names[] = {
    "one", "two", "three", "four",
    "five", "six", "seven", "eight", "nine"
};
int main() {
    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; i++){
        if (i <= 9){
            cout << names[i-1] << endl;
            continue;
        }
        cout << (i % 2 == 0 ? "even" : "odd") << endl;
    }
}
