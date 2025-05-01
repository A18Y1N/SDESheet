// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void selection(int arr[], int n){
    for (int i = 0; i <= n - 2; i++) {
        int min = i;
        for (int j = i; j <= n - 1; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
    cout << "The array after sorting is: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
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
    selection(arr, n);
    return 0;
}
