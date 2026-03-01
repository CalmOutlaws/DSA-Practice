#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Bubble Sort - O(n^2)
void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    for(int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

// Selection Sort - O(n^2)
void selectionSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n-1; i++) {
        int minIdx = i;
        for (int j = i+1; j < n; j++) {
            if (arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }
        swap(arr[i], arr[minIdx]);
    }
}

void printArray(vector<int>& arr) {
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    vector<int> arr1 = {64, 34, 25, 12, 22, 11, 90};
    vector<int> arr2 = arr1; // Copy of the original array for selection sort
    vector<int> arr3 = arr1; // Copy of the original array for built-in sort
    
    cout << "Original array: ";
    printArray(arr1);
    
    bubbleSort(arr1);
    cout << "After Bubble Sort: ";
    printArray(arr1);
    
    selectionSort(arr2);
    cout << "After Selection Sort: ";
    printArray(arr2);
    
    sort(arr3.begin(), arr3.end());
    cout << "After Built-in Sort: ";
    printArray(arr3);

    return 0;
}