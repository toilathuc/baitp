//#include<bits/stdc++.h>
//
//using namespace std;
//
//map<int, string> ones = {
//    {0, "zero"}, {1, "one"}, {2, "two"}, {3, "three"}, {4, "four"},
//    {5, "five"}, {6, "six"}, {7, "seven"}, {8, "eight"}, {9, "nine"}
//};
//
//map<int, string> teens = {
//    {10, "ten"}, {11, "eleven"}, {12, "twelve"}, {13, "thirteen"},
//    {14, "fourteen"}, {15, "fifteen"}, {16, "sixteen"}, {17, "seventeen"},
//    {18, "eighteen"}, {19, "nineteen"}
//};
//
//map<int, string> tens = {
//    {20, "twenty"}, {30, "thirty"}, {40, "forty"}, {50, "fifty"},
//    {60, "sixty"}, {70, "seventy"}, {80, "eighty"}, {90, "ninety"}
//};
//
//string NumberToEnglish(int num) {
//    if (num >= 0 && num < 10)
//        return ones[num];
//    else if (num >= 10 && num < 20)
//        return teens[num];
//    else if (num >= 20 && num < 100)
//        return tens[num - num % 10] + ((num % 10 != 0) ? " " + ones[num % 10] : "");
//    else if (num >= 100 && num < 1000)
//        return ones[num / 100] + " hundred" + ((num % 100 != 0) ? " and " + NumberToEnglish(num % 100) : "");
//    else if (num >= 1000 && num < 1000000)
//        return NumberToEnglish(num / 1000) + " thousand" + ((num % 1000 != 0) ? " " + NumberToEnglish(num % 1000) : "");
//    else if (num >= 1000000 && num < 1000000000)
//        return NumberToEnglish(num / 1000000) + " million" + ((num % 1000000 != 0) ? " " + NumberToEnglish(num % 1000000) : "");
//    else
//        return "out of range";
//}
//
//int main() {
//    int number;
//    cin >> number;
//
//    if (number >= -999999999 && number <= 999999999)
//        cout << NumberToEnglish(number) << endl;
//    else
//        cout << "invalid" << endl;
//    return 0;
//}
//


//#include<iostream>
//using namespace std;
//int main() {
//    int n; cin >> n;
//
//    int x = 0;
//
//    for (int i = 0; i < n; i++) {
//        x++;
//        for (int j = 0; j < n; j++) {
//            int res = j + x;
//            if (res > n) cout << res % n << " ";
//            else cout << res << " ";
//
//        }
//        cout << endl;
//    }
//
//
//    return 0;
//
//}

//#include <iostream>
//using namespace std;
//
//int main() {
//    int a = -1;
//    int b;
//    bool c = true;
//
//    while (true) {
//        cin >> b;
//
//        if (b < 0)
//            break;
//
//        if (c) {
//            cout << b << " ";
//            c = false;
//        }
//        else {
//            if (b != a)
//                cout << b << " ";
//        }
//
//        a = b;
//    }
//
//    cout << b;
//
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main() {
//    int N;   cin >> N;
//
//    for (int i = 0; i < N; ++i) {
//
//        for (int j = 0; j < i; ++j) {
//            cout << " ";
//        }
//
//        for (int k = 0; k < N - i; ++k) {
//            cout << "*";
//        }
//        cout << endl;
//    }
//
//    return 0;
//}
//#include <iostream>
//using namespace std;
//
//int main() {
//    int N;   cin >> N;
//
//    for (int i = 0; i < N; ++i) {
//        for (int j = 0; j < N - i - 1; ++j) {
//            cout << " ";
//        }
//        for (int k = 0; k < 2 * i + 1; ++k) {
//            cout << "*";
//        }
//        cout << endl;
//    }
//}

//#include <iostream>
//using namespace std;
//
//int main() {
//    int N;   cin >> N;
//
//    for (int i = 0; i < N; ++i) {
//
//        for (int j = 0; j < i; ++j) {
//            cout << " ";
//        }
//
//        for (int k = 0; k < 2 * (N - i) - 1; ++k) {
//            cout << "*";
//        }
//        cout << endl;
//    }
//
//    return 0;
//}


//#include <iostream>
////#include <vector>
//
//using namespace std;
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	int n;
//	cin >> n;
//
//	int k = n;
//	//    int max_value = INT_MIN;
//	int x1, y1;
//	int res1, res2;
//	while (k) {
//		int x, y;
//		cin >> x >> y;
//
//		if (k < n) {
//			res1 = min(x, x1);
//			res2 = min(y, y1);
//		}
//		x1 = x;
//		y1 = y;
//		k--;
//	}
//	cout << res1 * res2;
//}






