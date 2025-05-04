#include <iostream>
using namespace std;
#include <vector>

int lower(vector<int> arr, int n, int x) {
    int low = 0;
    int high = n - 1;
    int ans = n;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] > x) {
            ans = mid;
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    return ans;
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
    
    int result = lower(arr, size, target);
    cout << result;
    return 0;
}
