#include <bits/stdc++.h>
using namespace std;

int main(){
    string S;
    while(cin >> S){
        reverse(S.begin(), S.end());
        cout << S << " ";
    }
}