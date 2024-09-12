#include<bits/stdc++.h>
using namespace std;
#define dbg(x) cout<<#x<<" : "<<x<<'\n';
#define dbgv(v) cout<<#v<<" : "; for(auto it:v) cout<<it<<' ';cout<<'\n';
void solve(){
    string S;
    cin >> S;
    int sum = 0;
    for(int i=0;i<S.size();i++){
        int o = S[i]-'0';
        sum+=o;
    }   
    cout << sum << endl;    
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