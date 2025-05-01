#include <iostream>
using namespace std;

void bubble(int arr[], int n){
    int outerloop = 0;
    for (int i = 0; i <= n - 2; i++) {
        bool swapped = false;
        for (int j = 1; j <= n - i - 1; j++) {
            if (arr[j] < arr[j - 1]) {
                int temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
                swapped = true;
            }
        }
        outerloop += 1;
        if (swapped == false) {
            cout << "Breaks to reduce time complexity if array is sorted or nearly sorted" << endl;
            break;
        }
    }
    cout << "The number of times the loop runs : " << outerloop << endl;
    cout << "The after sorting by Bubble Sort is: ";
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
    bubble(arr, n);
    return 0;
}
