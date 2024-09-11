#include <bits/stdc++.h>
using namespace std;

int main(){
    string X, Y;
    cin >> X >> Y;
    bool flag = true;
    int i = 0, j = 0;
    while(i<X.size() && j<Y.size()){
        if(X[i]>Y[j]){
            cout << Y << endl;
            flag = false;
            break;
        }
        else if(Y[j]>X[i]){
            cout << X << endl;
            flag = false;
            break;
        }
        i++; j++;
    }
    if(flag){
        if(X.size()>Y.size()) cout << Y << endl;
        else cout << X << endl;
    }
}