#include <bits/stdc++.h>
using namespace std;

void printMaxOfSubArrays(vector<int> arr, int n) {
    vector<int> maxNumbers;
    for (int i = 0; i < n; i++) {
        int max_num = arr[i];
        for (int j = i; j < n; j++) {
            max_num = max(max_num, arr[j]);
            maxNumbers.push_back(max_num);
        }
    }

    sort(maxNumbers.begin(), maxNumbers.end());

    for(int num:maxNumbers) cout << num << " ";
    cout << endl;
}

int main() {
    int T;
    cin >> T;
    while(T--) {
        int N;
        cin >> N;
        vector<int> A(N);
        for(int i=0; i<N; i++) cin >> A[i];
        printMaxOfSubArrays(A, N);
    }
    return 0;
}