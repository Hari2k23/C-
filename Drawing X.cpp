#include<bits/stdc++.h>
using namespace std;
#define dbg(x) cout<<#x<<" : "<<x<<'\n';
#define dbgv(v) cout<<#v<<" : "; for(auto it:v) cout<<it<<' ';cout<<'\n';
void solve(){
    int N;
    cin >> N;
    char mat[N][N];
    for(int i=0;i<N;i++){
        mat[i][i] = '\\';
        mat[i][N-i-1] = '/';
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(i!=j && i+j!=N-1) mat[i][j] = '*';
        }
    }
    mat[N/2][N/2] = 'X';
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cout << mat[i][j];
        }
        cout << "\n";
    }    
    }
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc = 1;
    // cin>>tc;
    while(tc--){
        solve();
    }
    return 0;
}
