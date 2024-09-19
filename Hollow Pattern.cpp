#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int N;
        cin >> N;
        int total = 2*N - 1;
        for(int i=1;i<=total;i++){
            int ind = (i<=N ? i : total-i+1);
            int blank = N - ind;
            for(int j=1;j<=blank;j++) cout << " ";
            cout << "*";
            if(i!=1 && i!=total){
                int m = total - 2 - 2*(blank);
                for(int j=1;j<=m;j++) cout << " ";
                cout << "*";
            }
            cout << "\n";
        }
    }
}