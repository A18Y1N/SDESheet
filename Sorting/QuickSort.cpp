#include <iostream>
#include <vector>
using namespace std;

int partition(int arr[], int low, int high) {
    int pivot = arr[low];
    int i = low;
    int j = high;
    while (i < j) {
        while (arr[i] <= pivot && i <= high) {
            i++;
        }
        while (arr[j] > pivot && j >= low) {
            j--;
        }
        if (i < j) {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;
    return j;
}

void quicksort(int arr[], int low, int high) {
    if (low < high) {
        int part = partition(arr, low, high);
        quicksort(arr, low, part - 1);
        quicksort(arr, part + 1, high);
    }
}

int main() {
    int arr[] = {5,3,4,1,2,6};
    int len = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < len; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    quicksort(arr, 0, 5);
    for (int i = 0; i < len; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
