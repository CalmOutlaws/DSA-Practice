#include <iostream>
using namespace std;

int main() {

    int arr[5] = {10, 20, 30, 40, 50};

    cout << "Array elements: ";
    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int max = arr[0];
    for(int i = 1; i < 5; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    cout << "Maximum: " << max << endl;

    int sum = 0;
    for(int i = 0; i < 5; i++) {
        sum += arr[i];
    }
    cout << "Sum: " << sum << endl;

    return 0;
}