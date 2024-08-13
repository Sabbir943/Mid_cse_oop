#include<iostream>
using namespace std;

int main() {
    int size, i;
    cout << "Enter the size of the Array: ";
    cin >> size;

    int arr[size];
    cout << "Enter the elements of the Array: ";
    for (i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int data;
    cout << "Enter the target value: ";
    cin >> data;

    int l = 0, r = size - 1, mid;
    while (l <= r) {
        mid = l + (r - l) / 2;  
        if (arr[mid] == data) {
            cout << "Value is found at position: " << mid + 1 << endl;
            return 0;
        } else if (arr[mid] < data) {
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }

    cout << "Not found!" << endl;
    return 0;
}
