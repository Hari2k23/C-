#include <bits/stdc++.h>
using namespace std;

bool isPrime(int N){
    for(int i=2;i<N;i++) if(N%i==0) return 0;
    return 1;
}

int main(){
    int N;
    cin >> N;
    for(int i=2;i<=N;i++) if(isPrime(i)) cout << i << " ";
}