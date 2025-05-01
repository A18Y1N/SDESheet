// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void insertion(int arr[], int n) {
    for (int i = 1; i <= n - 1; i++) {
        int j = i;
        while (j > 0 && (arr[j - 1] > arr[j])) {
            int temp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = temp;
            j--;
        }
    }
    cout << "The array after insertion sort is: ";
    for (int i = 0; i <= n - 1; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the length of the array: ";
    cin >> n;
    cout << endl;
    int arr[n];
    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i <= n - 1; i++) cin >> arr[i];
    cout << "The array before sorting is: ";
    for (int i = 0; i <= n - 1; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    insertion(arr, n);
    return 0;
}
