#include <iostream>
#include <cmath>
using namespace std;
int check1(int a) {
    if (a == 0) {
        return 0;
    } else {
        return a % 2 + 10 * check1(a / 2);
    }
}

int check2(int b) {
    int a = 0;
    int power = 0;
    while (b != 0) {
        a += (b % 10) * std::pow(2, power);
        b /= 10;
        power++;
    }
    return a;
}

int main() {
    int a;
     cin >> a;

    int b = check1(a);
     cout << b <<  endl;

    int bi;
    
     cin >> bi;
    int dc = check2(bi);
     cout  << dc <<  endl;

    return 0;
}

