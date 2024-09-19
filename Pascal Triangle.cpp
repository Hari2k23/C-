#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int N;
        cin >> N;
        for(int i=1;i<=N;i++){
            for(int j=0;j<N-i;j++) cout << "  ";
            int res = 1;
            for(int j=1;j<=i;j++){
                cout << res << "   ";
                res = (res*(i-j))/j;
            }
            cout << "\n";
        }
    }
}