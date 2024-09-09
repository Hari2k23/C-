#include <bits/stdc++.h>
using namespace std;

vector<int> shiftRight(int N, int X, vector<int> arr){
    if(X%N ==0) return arr;
    vector<int> result(N);
    for(int i=0;i<N;i++) result[(i+X)%N] = arr[i];
    return result;
}

int main(){
    int N, X;
    cin >> N >> X;
    vector<int> arr(N);
    for(int i=0;i<N;i++) cin >> arr[i];
    vector<int> result = shiftRight(N, X, arr);
    for(int i=0;i<N;i++) cout << result[i] << " ";
    cout << endl;
}