#include <iostream>
using namespace std;
#include <vector>

int binarysearch(vector<int>& arr, int target) {
    int low = 0;
    int high = arr.size() - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == target) {
            return mid;
        }
        else if (arr[mid] > target) {
            high = mid - 1;
        }
        else if (arr[mid] < target) {
            low = mid + 1;
        }
    }
    return -1;
    cout << endl;
}

int main() {
    cout << "Enter the size of the array: ";
    int size;
    cin >> size;
    vector<int> arr(size);
    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    int target;
    cout << "Enter the target element: ";
    cin >> target;
    cout << endl;
    int x = binarysearch(arr, target);
    cout << x;
    if (x == -1) {
        cout << "Element is not in the list" << endl;
    }
    return 0;
}
