#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int N;
        cin >> N;
        int A[N];
        for(int i=0;i<N;i++) cin >> A[i];
        int min = INT_MAX;
        int position = 0;
        for(int i=0;i<N;i++) if(min>A[i]){
            min = A[i];
            position = i+1;
        }
        cout << min << " " << position << endl;
    }
}