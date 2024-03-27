#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

int getRandomNumber() {
    return rand() % 50;
}

void check(vector<int>& arr, int n, int i, int j, int k) {
    if (i >= n - 2)
        return;

    if (k >= n) { check(arr, n, i, j + 1, j + 2);
        return;
    }

    int sum = arr[i] + arr[j] + arr[k];
    if (sum % 25 == 0) {
        cout << "(" << arr[i] << ", " << arr[j] << ", " << arr[k] << ")\n";
    }

    check(arr, n, i, j, k + 1);
}

void check1(vector<int>& arr, int n) {
    cout << "Cac bo 3 so nguyen co tong chia het cho 25:\n";
    for (int i = 0; i < n - 2; i++) {
        check(arr, n, i, i + 1, i + 2);
    }
}

int main() {
    srand(time(NULL));

     const int N = 20;
    vector<int> arr(N);
    for (int i = 0; i < N; i++) {
        arr[i] = getRandomNumber();
    }

    cout << "Vector N so nguyen trong khoang tu 0 - 49:\n";
    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

     check1(arr, N);

    return 0;
}

