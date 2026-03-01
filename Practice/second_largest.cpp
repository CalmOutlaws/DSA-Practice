#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    vector<int> arr = {5, 2, 8, 1, 9, 3, 7};
    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for(int nums : arr) {
        if(nums > largest) {
            secondLargest = largest;
            largest = nums;
        } else if(nums > secondLargest && nums != largest) {
            secondLargest = nums;
        }
    }
    cout << "Largest: " << largest << endl;
    cout << "Second Largest: " << secondLargest << endl;

    return 0;
}