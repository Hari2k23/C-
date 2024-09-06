#include<bits/stdc++.h>
using namespace std;
#define dbg(x) cout<<#x<<" : "<<x<<'\n';
#define dbgv(v) cout<<#v<<" : "; for(auto it:v) cout<<it<<' ';cout<<'\n';
void solve(){
    int N;
    cin >> N;
    for(int i=1;i<=N;i++){
        if(!(N%i)) cout << i << "\n";
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