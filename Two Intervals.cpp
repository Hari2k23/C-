#include<bits/stdc++.h>
using namespace std;
#define dbg(x) cout<<#x<<" : "<<x<<'\n';
#define dbgv(v) cout<<#v<<" : "; for(auto it:v) cout<<it<<' ';cout<<'\n';
void solve(){
    int l1, r1, l2, r2, l, r;
    cin >> l1 >> r1 >> l2 >> r2;
    l = max(l1, l2); 
    r = min(r1, r2);
    if(r<l) cout << -1; 
    else cout << l << " " << r;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc = 1;
    //cin>>tc;
    while(tc--){
        solve();
    }
    return 0;
}