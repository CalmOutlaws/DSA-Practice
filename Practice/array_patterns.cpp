#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    vector<int> arr = {5, 2, 8, 1, 9, 3, 7};

    // Find maximum and minimum
    int maxVal = INT_MIN;
    int minVal = INT_MAX;
    for (int num : arr) {
        maxVal = max(maxVal, num);
        minVal = min(minVal, num);
    }
    cout << "Max: " << maxVal << ", Min: " << minVal << endl;

    // Sum of array
    int sum = 0;
    for(int num : arr){
        sum += num;
    }
    cout << "Sum: " << sum << endl;

    // Reverse array
    vector<int> reversed;
    for(int i = arr.size()-1; i >= 0; i--) {
        reversed.push_back(arr[i]);
    }
    cout << "Reversed: ";
    for (int num : reversed) {
        cout << num << " ";
    }
    cout << endl;

    // Search for element
    int target = 8;
    bool found = false;
    for (int num : arr) {
        if(num == target) {
            found = true;
            break;
        }
    }
    cout << target << (found ? " found": " not found") << endl;

    // Count even and odd numbers
    int evenCount = 0, oddCount = 0;
    for (int num : arr) {
        if(num % 2 == 0) evenCount++;
        else oddCount++;
    }
    cout <<"Even: " << evenCount << ", Odd: " << oddCount << endl;

    return 0;
}