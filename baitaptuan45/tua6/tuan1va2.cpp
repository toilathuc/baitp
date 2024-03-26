#include <iostream>
#include <random>

using namespace std;

const int x[8] = {1, 1, 1, 0, 0, -1, -1, -1};
const int y[8] = {-1, 0, 1, -1, 1, 1, -1, 0};

void randbom(char **a, int m, int n, int k) {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> rowDis(0, m - 1);
    uniform_int_distribution<> colDis(0, n - 1);

    while (k--) {
        int randomRow = rowDis(gen);
        int randomCol = colDis(gen);
        a[randomRow][randomCol] = '*';
    }
}

void loang(char **a, char **b, int m, int n, int i, int j, int &remaining) {
    if (i < 0 || i >= m || j < 0 || j >= n || b[i][j] != '+')
        return;

    b[i][j] = a[i][j];
    remaining--;

    if (a[i][j] == '0') {
        for (int k = 0; k < 8; k++) {
            int new_x = i + x[k];
            int new_y = j + y[k];
            if (new_x >= 0 && new_x < m && new_y >= 0 && new_y < n && b[new_x][new_y] == '+') {
                loang(a, b, m, n, new_x, new_y, remaining);
            }
        }
    }
}

int main() {
    int m, n, k;
    cout << "Nhap so hang cua mang: ";
    cin >> m;
    cout << "Nhap so cot cua mang: ";
    cin >> n;
    cout << "Nhap so luong vi tri ngau nhien can chon: ";
    cin >> k;

    char **a = new char *[m];
    for (int i = 0; i < m; ++i) {
        a[i] = new char[n];
    }

    char **b = new char *[m];
    for (int i = 0; i < m; i++) {
        b[i] = new char[n];
        for (int j = 0; j < n; j++) {
            b[i][j] = '+';
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            a[i][j] = '.';
        }
    }

    randbom(a, m, n, k);

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            int dem = 0;
            if (a[i][j] != '*') {
                for (int k = 0; k < 8; k++) {
                    int new_x = i + x[k];
                    int new_y = j + y[k];
                    if (new_x >= 0 && new_x < m && new_y >= 0 && new_y < n && a[new_x][new_y] == '*') {
                        dem++;
                    }
                }
                a[i][j] = dem + '0';
            }
        }
    }

    int remaining = m * n - k;
    while (remaining > 0) {
        int x, y;
        cout << "Nhap vi tri cua (x, y): ";
        cin >> x >> y;
        x--;
        y--;

        if (x < 0 || x >= m || y < 0 || y >= n) {
            cout << "Vi tri khong hop le!" << endl;
            continue;
        }

        if (a[x][y] == '*') {
            cout << "YOU DEAD" << endl;
            break;
        } else {
            loang(a, b, m, n, x, y, remaining);
            if (remaining == 0) {
                cout << "YOU WIN" << endl;
                break;
            }
            cout << "Mang sau khi chon" << endl;
            for (int i = 0; i < m; i++) {
                for (int j = 0; j < n; j++) {
                    cout << b[i][j] << " ";
                }
                cout << endl;
            }
            cout << endl;
        }
    }

    for (int i = 0; i < m; ++i) {
        delete[] a[i];
        delete[] b[i];
    }
    delete[] a;
    delete[] b;

    return 0;
}

