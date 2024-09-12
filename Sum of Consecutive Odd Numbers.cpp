#include<bits/stdc++.h>
using namespace std;
#define dbg(x) cout<<#x<<" : "<<x<<'\n';
#define dbgv(v) cout<<#v<<" : "; for(auto it:v) cout<<it<<' ';cout<<'\n';
void solve(){
    int X, Y;
    cin >> X >> Y;
    int sum = 0;
    if(X>Y) swap(X, Y);
    for(int i=X+1;i<Y;i++) if(i%2) sum+=i; 
    cout << sum << endl;
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