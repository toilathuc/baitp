//bai 6
	

//	#include <iostream>
//using namespace std;
//
//int main() {
//    int n;
//   
//    cin >> n;
//
//   
//    int a[n][n] = {0}; 
//    int y_pos = 0;
//    int x_pos = n / 2;
//    
//
//    for (int i = 1; i < n * n; i++) {
//        a[y_pos][x_pos] = i;
//
//        x_pos++;
//        y_pos--;
//
//        if (i % n==0) {
//            y_pos+=2;
//            x_pos--;
//        }
//        else {
//            if (y_pos < 0) {
//                y_pos += n;
//            }
//            else if (x_pos < 0) {
//                x_pos += n;
//            }
//            else if (y_pos > n - 1) {
//                y_pos -= n;
//            }
//            else if (x_pos > n - 1) {
//                x_pos -= n;
//            }
//        }
//    }
//
//   
//    a[y_pos][x_pos] = n*n;
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < n; j++) {
//            cout << a[i][j] << "\t";
//        }
//        cout << endl;
//    }
//
//    return 0;
//}

