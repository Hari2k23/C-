#include<bits/stdc++.h>
using namespace std;

int main(){
    string S;
    cin >> S;
    map<char, int> count = {};
    for(char c:S){
        count[c]++;
    }

    for(auto c:count){
        cout << c.first << " : " << c.second << "\n";
    }
}