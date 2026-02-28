#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> nums;

    nums.push_back(10);
    nums.push_back(20);
    nums.push_back(30);
    nums.push_back(40);

    cout << "Vector elements: ";
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    cout << "Using range loops: ";
    for (int x : nums) {
        cout << x << " ";
    }
    cout << endl;

    cout << "Size: " << nums.size() << endl;

    cout << "First: " << nums[0] << endl;
    cout << "Last: " << nums[nums.size()-1] << endl;

    vector<int> marks = {85, 90, 78, 92, 88};

    int maxMark = marks[0];
    for (int mark : marks) {
        if(mark > maxMark) {
            maxMark = mark;
        }
    }
    cout << "Highest mark: " << maxMark << endl;

    nums.pop_back();
    cout << "After pop: ";
    for(int x : nums) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}