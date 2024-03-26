//#include <iostream>
//using namespace std;
//int main() {
//    int x, y;
//    cin >> x >> y;
//    int a[x][y];
//    int dem = 1;
//    int res = x * y;
//    int tamk = 0;
//    int tamh = 0;
//
//    int h = 0, k = x - 1;
//    int h1 = 0, k1 = y - 1;
//
//    while (dem <= res) {
//        
//        for (int i = tamh; i <= k1 && dem <= res; i++)
//            a[tamk][i] = dem++;
//        tamk++;
//        for (int i = tamk; i <= k && dem <= res; i++)
//            a[i][k1] = dem++;
//
//        k1--;   
//        for (int i = k1; i >= tamh && dem <= res; i--)
//            a[k][i] = dem++;
//
//        k--;
//        for (int i = k; i >= tamk && dem <= res; i--)
//            a[i][tamh] = dem++;
//
//        tamh++;
//    }
//    for (int i = 0; i < x; i++) {
//        for (int j = 0; j < y; j++)
//            cout << a[i][j] << "\t";
//        cout << endl;
//    }
//    return 0;
//}

