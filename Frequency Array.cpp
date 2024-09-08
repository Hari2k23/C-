#include<bits/stdc++.h>
using namespace std;
#define dbg(x) cout<<#x<<" : "<<x<<'\n';
#define dbgv(v) cout<<#v<<" : "; for(auto it:v) cout<<it<<' ';cout<<'\n';
void solve(){
    int M, N;
    cin >> N >> M;
    unordered_map<int, int> frequency;
    for(int i=0;i<N;i++){
        int X;
        cin >> X;
        frequency[X]++;
    }
    for(int i=1;i<=M;i++) cout << frequency[i] << "\n";
    cout << endl;
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