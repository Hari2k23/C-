#include <bits/stdc++.h>
using namespace std;
#define FOR(i, n) for(int i=0;i<n;i++)
int main(){
    int T;
    cin >> T;
    while(T--){
        int N;
        cin >> N;
        int arr[N][N];
        FOR(i, N){
            FOR(j, N){
                cin >> arr[i][j];
            }
        }
        int dia1 = 0, dia2 = 0;
        FOR(i, N){
            FOR(j, N){
                if(i==j) dia1+=arr[i][j];
                else if(i+j==N-1) dia2+=arr[i][j];
            }
        }
        if(dia2>dia1) swap(dia1, dia2);
        cout << dia1 - dia2 << endl;
    }
}