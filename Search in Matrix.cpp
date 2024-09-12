#include<bits/stdc++.h>
using namespace std;
#define dbg(x) cout<<#x<<" : "<<x<<'\n';
#define dbgv(v) cout<<#v<<" : "; for(auto it:v) cout<<it<<' ';cout<<'\n';
#define FOR(i, N) for(int i=0;i<N;i++)
void solve(){
    int N, M;
    cin >> N >> M;
    int arr[N][M];
    FOR(i, N){
        FOR(j, M){
            cin >> arr[i][j];
        }
    }   
    int X;
    cin >> X;
    bool flag = 0;
    FOR(i, N){
        FOR(j, M){
            if(arr[i][j]==X){
                flag = 1;
                break;
            }
        }
    }
    if(flag) cout << "will not take number" <<endl;
    else cout << "will take number" << endl;
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