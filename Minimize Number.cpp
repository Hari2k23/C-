#include <bits/stdc++.h>
using namespace std;

int maxOperations(int A[], int N) {
    bool isAllEven = true;
    for (int i = 0; i < N; i++) {
        if (A[i] % 2 != 0) {
            isAllEven = false;
            break;
        }
    }
    if(isAllEven){
        for(int i = 0; i < N; i++) A[i] /= 2;
        return 1 + maxOperations(A, N);
    } 
    else return 0;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        int A[N];
        for (int i = 0; i < N; i++) cin >> A[i];
        cout << maxOperations(A, N) << endl;
    }
}
