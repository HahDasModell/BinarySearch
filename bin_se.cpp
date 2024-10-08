#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

int BinarySearch(vector<int> &arr, int guess) {

    int upper = arr.size();
    int lower = 0;
    int mid;

    while (lower < upper) {
        mid = (upper + lower) / 2;
        cout << mid << "=" << upper << "+" << lower << "/ 2" << endl;
        if (arr[mid] == guess) {
            return arr[mid];
        }
        if (arr[mid] < arr[guess]) {
            lower = mid;
        } else {
            upper = mid;
        }
    }
}

int main() {
    vector<int> arr;
    for (int i = 0; i < 100; ++i) {
        arr.push_back(i);
    }

    cout << BinarySearch(arr, 63);
    cout << endl;
    system("pause");
    return 0;
}