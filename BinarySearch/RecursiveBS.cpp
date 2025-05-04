#include <iostream>
using namespace std;

int binarysearch(int arr[], int low, int high, int target) {
    if (low > high) {
        return - 1;
    }
    
    int mid = (low + high) / 2;
    if (target == arr[mid]) {
        return mid;
    }
    if (target < arr[mid]) {
        return binarysearch(arr, low, mid - 1, target);
    }
    if (target > arr[mid]) {
        return binarysearch(arr, mid + 1, high, target);
    }
    return -1;
}

int main() {
    cout << "Enter the size of the array: ";
    int size;
    cin >> size;
    int arr[size];
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
    int x = binarysearch(arr, 0,  size- 1, target);
    cout << x;
    if (x == -1) {
        cout << "Element is not in the list" << endl;
    }
    return 0;
}
