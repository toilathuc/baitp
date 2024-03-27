#include <bits/stdc++.h>
using namespace std;

int randomLessThanN(int N) {
    if (N <= 0) {
        return -1; 
}
     return rand() % N;
}
int main() {
   srand(time(NULL));

    int N;
    cin >> N;

    int r = randomLessThanN(N);

 	cout<<r;
    return 0;
}
