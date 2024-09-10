#include <iostream>
using namespace std;

void solve() {
    int N;
    cin >> N;
    int A[N];
    for (int i = 0; i < N; i++) cin >> A[i];
    int count = 0;
    for (int i = 0; i < N; i++) {
        int j = i;
        while (j + 1 < N && A[j] <= A[j + 1]) {
            j++;
            count++;
        }
    }
    cout << count + N << endl;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}
