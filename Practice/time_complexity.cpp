#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n = 1000;

    cout << "First element: " << n << endl;

    cout << "Printing all numbers 1 to n:" << endl;
    for(int i = 1; i <= 10; i++) {
        cout << i << " ";
    }
    cout << endl;
    cout << "Nested loop example: " << endl;
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            cout << "(" << i << "," << j << ") ";
        }
        cout << endl;
    }

    cout << "Binary search pattern: " << endl;
    int num = 64;
    while(num > 1) {
        cout << num << " ";
        num = num / 2;
    }
    cout << endl;

    return 0;
}