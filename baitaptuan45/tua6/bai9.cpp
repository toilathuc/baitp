#include <iostream>
using namespace std;

int check(int n) {
    if (n <= 1) return 0; 
	for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) return 0; 
    }
    return 1; 
}


void check1(int N) {
   
    for (int i = 2; i < N; ++i) {
        if (check(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    int N;
   
    cin >> N;

    check1(N);

    return 0;
}

