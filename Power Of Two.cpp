#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    if(ceil(log2(N))==floor(log2(N))) cout << "YES";
    else cout << "NO";
    return 0;
}