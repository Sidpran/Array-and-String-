#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 3;
    bool found = false;
    for (int i = 0; i < n; ++i) {
        if (arr[i] == target) {
            found = true;
            break;
        }
    }
    if (found) {
        cout << "Number " << target << " found in the array." << endl;
    } else {
        cout << "Number " << target << " not found in the array." << endl;
    }
    return 0;
