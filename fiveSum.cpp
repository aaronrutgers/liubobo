#include <iostream>

using namespace std;

template<typename T>
int binarySearch(T arr[], int n, T target) {
    int l = 0, r = n - 1; // search in [l...r]
    while (l <= r) {
        int mid = (l + r) / 2;
        if (arr[mid] == target) {
            return mid;
        }
        if (target > arr[mid]) {
            l = mid + 1; // target in [mid+1...r]
        } else {
            r = mid - 1; // target in [l...mid-1]
        }
    }
    return -1;
}

int main() {
    int array[5] = {1, 2, 3, 4, 5};
    cout << binarySearch(array, sizeof(array), 5) << endl;
    return 0;
}
