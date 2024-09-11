#include<bits/stdc++.h>
using namespace std;
#define dbg(x) cout<<#x<<" : "<<x<<'\n';
#define dbgv(v) cout<<#v<<" : "; for(auto it:v) cout<<it<<' ';cout<<'\n';
void solve(){
    string S;
    cin >> S;
    if(S.size()>10) cout << S[0] << S.size()-2 << S[S.size()-1] << endl;
    else cout << S << endl;  
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