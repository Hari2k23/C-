#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    for(int i=1;i<=n;i++){
        if(i%2) for(int j=1;j<=m;j++) cout << '#';
        else{
            if((i/2)%2) cout << '.';
            else cout << '#';
            for(int j=1;j<m-1;j++) cout << '.';
            if((i/2)%2) cout << '#';
            else cout << '.';
        }
        cout << '\n';
    }
}