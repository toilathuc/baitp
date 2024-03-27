#include <iostream>
using namespace std;
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

bool isCoprime(int a, int b) {
     return gcd(a, b) == 1;
}

int main() {
    int a, b;
    cin>>a>>b;
    if(gcd(a, b) == 1) cout<<"hai so nt cung nhau"<<gcd(a, b);
    else cout<<"khong phai";
    

   
    
    return 0;
}

