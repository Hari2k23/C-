#include<bits/stdc++.h>
using namespace std;

int main(){
    int T, N;
    cin >> T;
    while(T--){
        cin >> N;
        long long fact = 1;
        for(int i=1;i<=N;i++){
            fact*=i;
    }
    cout << fact << "\n";
    fact = 1;
    }
}