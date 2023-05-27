#include <iostream>
using namespace std;

void hanoi(int n, char A, char B, char C) {
    if (n == 1) {
        cout << n << ":" << A << "->" << C << endl;
    } else {
        hanoi(n-1, A, C, B);
        cout << n << ":" << A << "->" << C << endl;
        hanoi(n-1, B, A, C);
    }
}

int main() {
    int n;
    cout << "ÇëÊäÈëÔ²ÅÌÊý£º";
    cin >> n;
    hanoi(n, 'A', 'B', 'C');
    return 0;
}

