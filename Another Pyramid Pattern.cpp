#include<bits/stdc++.h>
using namespace std;
#define dbg(x) cout<<#x<<" : "<<x<<'\n';
#define dbgv(v) cout<<#v<<" : "; for(auto it:v) cout<<it<<' ';cout<<'\n';
void solve(){
    int N;
    cin >> N;
    for(int i=1;i<=N;i++){
        for(int j=1;j<=N-i;j++) cout << "  ";
        for(int j=1;j<=i;j++) cout << j << " ";
        for(int j=i-1;j>=1;j--) cout << j << " ";
        cout << "\n";
    }   
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