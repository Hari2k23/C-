#include<bits/stdc++.h>
using namespace std;
#define dbg(x) cout<<#x<<" : "<<x<<'\n';
#define dbgv(v) cout<<#v<<" : "; for(auto it:v) cout<<it<<' ';cout<<'\n';
#define FOR(i, n) for(int i=0;i<n;i++)
void solve(){
    int N, M;
    cin >> N >> M;
    int arr[N][M];
    FOR(i, N){
        FOR(j, M){
            cin >> arr[i][j];
        }
    }
    FOR(i, N){
        for(int j=M-1;j>=0;j--){
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc = 1;
    cin>>tc;
    while(tc--){
        solve();
    }
    return 0;
}