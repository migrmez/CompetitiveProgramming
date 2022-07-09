#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    if (n == 1) {
        cout << 1 << "\n";
        return 0;
    }
    if (n == 2 || n == 3) {
        cout << "NO SOLUTION" << "\n";
        return 0;
    }

    if (n % 2 == 0) {
        for (int i = 2; i <= n; i += 2) {
            cout << i << " ";
        }
        for (int j = 1; j < n; j += 2) {
            cout << j << " ";
        }
    } else {
        for (int i = n - 1; i > 0; i -= 2) {
            cout << i << " ";
        }
        for (int j = n; j > 0; j -= 2) {
            cout << j << " ";
        }
    }
    return 0;
}
