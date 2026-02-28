#include <iostream>
using namespace std;

int main() {

    cout << "Number 1 to 20: " << endl;
    for ( int i; i <= 20; i++) {
        cout << i << " ";
    }
    cout << endl;

    cout << "Even numbers: " << endl;
    for(int i = 2; i <= 20; i += 2){
        cout << i << " ";
    }
    cout << endl;

    int sum = 0;
    for(int i = 1; i <= 10; i++){
        sum += i;
    }
    cout << "Sum: " << sum << endl;

    int num;
    cout << "Enter number: ";
    cin >> num;

    if(num > 0){
        cout << "Positive" << endl;
    }
    else if (num > 0){
        cout << "Negative" << endl;
    } else {
        cout << "Zero" << endl;
    }

    return 0;
}