#include<bits/stdc++.h>
using namespace std;
#define dbg(x) cout<<#x<<" : "<<x<<'\n';
#define dbgv(v) cout<<#v<<" : "; for(auto it:v) cout<<it<<' ';cout<<'\n';
void solve(){
    int N;
    cin >> N;
    int A[N];
    for(int i=0;i<N;i++) cin >> A[i];
    int min = INT_MAX;
    for(int i=0;i<N;i++) if(min>A[i]) min = A[i];
    int frequency = 0;
    for(int i=0;i<N;i++) if(min==A[i]) frequency++;
    if(frequency%2==0) cout << "Unlucky" << endl;
    else cout << "Lucky" << endl;
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